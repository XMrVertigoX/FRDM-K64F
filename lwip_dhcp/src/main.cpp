/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "fsl_device_registers.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "lwip/opt.h"

#if LWIP_IPV4 && LWIP_DHCP

#include "ethernetif.h"
#include "lwip/dhcp.h"
#include "lwip/init.h"
#include "lwip/prot/dhcp.h"
#include "lwip/timeouts.h"
#include "netif/ethernet.h"

#ifdef __cplusplus
}
#endif

#include "board.h"
#include "clock_config.h"
#include "pin_mux.h"

#include <SEGGER_RTT.h>

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define EXAMPLE_ENET ENET

#define configPHY_ADDRESS 1

/* GPIO pin configuration. */
#define BOARD_LED_GPIO BOARD_LED_RED_GPIO
#define BOARD_LED_GPIO_PIN BOARD_LED_RED_GPIO_PIN
#define BOARD_SW_GPIO BOARD_SW3_GPIO
#define BOARD_SW_GPIO_PIN BOARD_SW3_GPIO_PIN
#define BOARD_SW_PORT BOARD_SW3_PORT
#define BOARD_SW_IRQ BOARD_SW3_IRQ
#define BOARD_SW_IRQ_HANDLER BOARD_SW3_IRQ_HANDLER

/*******************************************************************************
* Prototypes
******************************************************************************/

/*******************************************************************************
* Variables
******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

extern "C" int _write(int file, char *ptr, size_t len) {
    (void)file; /* Not used, avoid warning */
    SEGGER_RTT_Write(0, ptr, len);
    return len;
}

extern "C" int _write_r(struct _reent *r, int file, const void *ptr, size_t len) {
    (void)file; /* Not used, avoid warning */
    (void)r;    /* Not used, avoid warning */
    SEGGER_RTT_Write(0, ptr, len);
    return len;
}

/*!
 * @brief Interrupt service for SysTick timer.
 */
void SysTick_Handler(void) {
    time_isr();
}

/*!
 * @brief Prints DHCP status of the interface when it has changed from last status.
 *
 * @param netif network interface structure
 */
static void print_dhcp_state(struct netif *netif) {
    static u8_t dhcp_last_state = DHCP_STATE_OFF;
    struct dhcp *dhcp           = (struct dhcp *)netif_get_client_data(netif, LWIP_NETIF_CLIENT_DATA_INDEX_DHCP);

    if (dhcp_last_state != dhcp->state) {
        dhcp_last_state = dhcp->state;

        PRINTF(" DHCP state       : ");
        switch (dhcp_last_state) {
            case DHCP_STATE_OFF:
                PRINTF("OFF");
                break;
            case DHCP_STATE_REQUESTING:
                PRINTF("REQUESTING");
                break;
            case DHCP_STATE_INIT:
                PRINTF("INIT");
                break;
            case DHCP_STATE_REBOOTING:
                PRINTF("REBOOTING");
                break;
            case DHCP_STATE_REBINDING:
                PRINTF("REBINDING");
                break;
            case DHCP_STATE_RENEWING:
                PRINTF("RENEWING");
                break;
            case DHCP_STATE_SELECTING:
                PRINTF("SELECTING");
                break;
            case DHCP_STATE_INFORMING:
                PRINTF("INFORMING");
                break;
            case DHCP_STATE_CHECKING:
                PRINTF("CHECKING");
                break;
            case DHCP_STATE_BOUND:
                PRINTF("BOUND");
                break;
            case DHCP_STATE_BACKING_OFF:
                PRINTF("BACKING_OFF");
                break;
            default:
                PRINTF("%u", dhcp_last_state);
                assert(0);
                break;
        }

        PRINTF("\r\n");

        if (dhcp_last_state == DHCP_STATE_BOUND) {
            PRINTF("\r\n IPv4 Address     : %u.%u.%u.%u\r\n", ((u8_t *)&netif->ip_addr.addr)[0], ((u8_t *)&netif->ip_addr.addr)[1], ((u8_t *)&netif->ip_addr.addr)[2], ((u8_t *)&netif->ip_addr.addr)[3]);
            PRINTF(" IPv4 Subnet mask : %u.%u.%u.%u\r\n", ((u8_t *)&netif->netmask.addr)[0], ((u8_t *)&netif->netmask.addr)[1], ((u8_t *)&netif->netmask.addr)[2], ((u8_t *)&netif->netmask.addr)[3]);
            PRINTF(" IPv4 Gateway     : %u.%u.%u.%u\r\n\r\n", ((u8_t *)&netif->gw.addr)[0], ((u8_t *)&netif->gw.addr)[1], ((u8_t *)&netif->gw.addr)[2], ((u8_t *)&netif->gw.addr)[3]);
        }
    }
}

/*!
 * @brief Main function.
 */
extern "C" int main(void) {
    PRINTF("\r\n************************************************\r\n");
    PRINTF(" DHCP example\r\n");
    PRINTF("************************************************\r\n");

    struct netif fsl_netif0;
    ip4_addr_t fsl_netif0_ipaddr, fsl_netif0_netmask, fsl_netif0_gw;

    SYSMPU_Type *base = SYSMPU;
    BOARD_InitPins();
    BOARD_BootClockRUN();
    // BOARD_InitDebugConsole();
    /* Disable SYSMPU. */
    base->CESR &= ~SYSMPU_CESR_VLD_MASK;

    PRINTF("time_init... ");
    time_init();
    PRINTF("OK\r\n");

    IP4_ADDR(&fsl_netif0_ipaddr, 0U, 0U, 0U, 0U);
    IP4_ADDR(&fsl_netif0_netmask, 0U, 0U, 0U, 0U);
    IP4_ADDR(&fsl_netif0_gw, 0U, 0U, 0U, 0U);

    PRINTF("lwip_init... ");
    lwip_init();
    PRINTF("OK\r\n");

    PRINTF("netif_add... ");
    netif_add(&fsl_netif0, &fsl_netif0_ipaddr, &fsl_netif0_netmask, &fsl_netif0_gw, NULL, ethernetif_init, ethernet_input);
    PRINTF("OK\r\n");

    PRINTF("netif_set_default... ");
    netif_set_default(&fsl_netif0);
    PRINTF("OK\r\n");

    PRINTF("netif_set_up... ");
    netif_set_up(&fsl_netif0);
    PRINTF("OK\r\n");

    PRINTF("dhcp_start... ");
    dhcp_start(&fsl_netif0);
    PRINTF("OK\r\n");

    while (1) {
        /* Poll the driver, get any outstanding frames */
        ethernetif_input(&fsl_netif0);

        /* Handle all system timeouts for all core protocols */
        sys_check_timeouts();

        /* Print DHCP progress */
        print_dhcp_state(&fsl_netif0);
    }
}
#endif
