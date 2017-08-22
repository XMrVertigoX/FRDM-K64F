# ----- Configuration ---------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-
PROJECT_NAME     = lwip_dhcp

SDK_ROOT = ../libs/SDK_2.2_FRDM-K64F
SEGGER   = ../libs/SEGGER_RTT

LINKER_SCRIPT = $(SDK_ROOT)/devices/MK64F12/gcc/MK64FN1M0xxx12_flash.ld

# ----- Sources ---------------------------------------------------------------

SYMBOLS += CPU_MK64FN1M0VLL12
SYMBOLS += DEBUG
SYMBOLS += SDK_DEBUGCONSOLE=0
SYMBOLS += FRDM_K64F
SYMBOLS += FREEDOM

INCLUDE_DIRS += $(SDK_ROOT)/CMSIS/Include
INCLUDE_DIRS += $(SDK_ROOT)/devices
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12/drivers
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12/utilities
INCLUDE_DIRS += $(SDK_ROOT)/middleware/lwip_2.0.0/contrib/apps
INCLUDE_DIRS += $(SDK_ROOT)/middleware/lwip_2.0.0/port
INCLUDE_DIRS += $(SDK_ROOT)/middleware/lwip_2.0.0/src
INCLUDE_DIRS += $(SDK_ROOT)/middleware/lwip_2.0.0/src/include
INCLUDE_DIRS += $(SDK_ROOT)/platform/components/phyksz8081

INCLUDE_DIRS += $(SEGGER)/RTT

INCLUDE_DIRS += src

SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_clock.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_common.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_enet.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_flash.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_gpio.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_smc.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_uart.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/gcc/startup_MK64F12.S
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/system_MK64F12.c
# SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/utilities/fsl_debug_console.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/port/ethernetif.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/port/sys_arch.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/api_lib.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/api_msg.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/err.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/netbuf.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/netdb.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/netifapi.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/sockets.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/api/tcpip.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/def.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/dns.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/inet_chksum.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/init.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ip.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/autoip.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/dhcp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/etharp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/icmp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/igmp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/ip4_addr.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/ip4_frag.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv4/ip4.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/dhcp6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/ethip6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/icmp6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/inet6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/ip6_addr.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/ip6_frag.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/ip6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/mld6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/ipv6/nd6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/mem.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/memp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/netif.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/pbuf.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/raw.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/stats.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/sys.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/tcp_in.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/tcp_out.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/tcp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/timeouts.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/core/udp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ethernet.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/lowpan6.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/auth.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/ccp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/chap_ms.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/chap-md5.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/chap-new.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/demand.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/eap.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/eui64.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/fsm.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/ipcp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/ipv6cp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/lcp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/lwip_ecp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/magic.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/mppe.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/multilink.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/ppp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/pppapi.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/pppcrypt.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/pppoe.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/pppol2tp.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/pppos.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/upap.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/utils.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/ppp/vj.c
SOURCE_FILES += $(SDK_ROOT)/middleware/lwip_2.0.0/src/netif/slipif.c

SOURCE_FILES += $(SEGGER)/RTT/SEGGER_RTT.c

SOURCE_FILES += $(wildcard src/*.c)
SOURCE_FILES += $(wildcard src/*.cpp)

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -mcpu=cortex-m4
GCCFLAGS += -mthumb
GCCFLAGS += -mfloat-abi=hard
GCCFLAGS += -mfpu=fpv4-sp-d16

COMMON_CFLAGS += -Og

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

# CPPFLAGS +=

LDFLAGS += -T$(LINKER_SCRIPT)
LDFLAGS += --specs=nano.specs
LDFLAGS += --specs=nosys.specs

# ----- Rules -----------------------------------------------------------------

include ../libs/xXx/utils/rules.mk

download: $(EXECUTABLE)
	$(TOOLCHAIN_PREFIX)gdb -q -x download.gdb $<
