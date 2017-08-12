INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_POSIX_SOURCE")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK64FN1M0VLL12")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSE_RTOS=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_ADVANCED_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DHTTPSRV_CFG_WEBSOCKET_ENABLED=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DHTTPSRV_CFG_MBEDTLS_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMBEDTLS_CONFIG_FILE='\"ksdk_mbedtls_config.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFRDM_K64F")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFREEDOM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fomit-frame-pointer")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D_POSIX_SOURCE")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK64FN1M0VLL12")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSE_RTOS=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_ADVANCED_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DHTTPSRV_CFG_WEBSOCKET_ENABLED=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DHTTPSRV_CFG_MBEDTLS_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DMBEDTLS_CONFIG_FILE='\"ksdk_mbedtls_config.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFRDM_K64F")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFREEDOM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fomit-frame-pointer")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MK64FN1M0VLL12")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g1")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MK64FN1M0VLL12")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../..)

include_directories(${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/ARM_CM4F)

include_directories(${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include)

include_directories(${ProjDirPath}/../../../../../../../platform/components/phyksz8081)

include_directories(${ProjDirPath}/../../../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../../../devices)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv)

include_directories(${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/contrib/apps)

include_directories(${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source)

include_directories(${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include)

include_directories(${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/port/ksdk)

include_directories(${ProjDirPath}/../../../../../../../devices/MK64F12/drivers)

include_directories(${ProjDirPath}/../../../../../../../devices/MK64F12/utilities)

include_directories(${ProjDirPath}/../../../../../../../devices/MK64F12)

add_executable(lwip_httpssrv_mbedTLS_freertos.elf 
"${ProjDirPath}/../../../../../../../devices/MK64F12/gcc/startup_MK64F12.S"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/ARM_CM4F/port.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/ARM_CM4F/fsl_tickless_systick.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/ARM_CM4F/fsl_tickless_generic.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/ARM_CM4F/portmacro.h"
"${ProjDirPath}/../fsl_phy.h"
"${ProjDirPath}/../fsl_phy.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_rnga.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_rnga.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_uart.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_uart.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_config.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_base64.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_base64.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_fs.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_fs.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_fs_data.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_port.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_prv.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_script.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_script.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_sha1.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_sha1.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_supp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_supp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_task.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_tls.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_tls.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_utf8.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_utf8.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_ws.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_ws.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_ws_api.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/apps/httpsrv/httpsrv_ws_prv.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_sim.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_sim.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_enet.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_enet.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/MemMang/heap_3.c"
"${ProjDirPath}/../lwip_httpssrv_mbedTLS_freertos.c"
"${ProjDirPath}/../FreeRTOSConfig.h"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/cau_api.h"
"${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/fsl_mmcau.h"
"${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/fsl_mmcau.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/utilities/fsl_debug_console.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/utilities/fsl_debug_console.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/system_MK64F12.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/system_MK64F12.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/ethernetif.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/ethernetif.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/lwipopts.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/sys_arch.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/arch/cc.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/arch/perf.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/port/arch/sys_arch.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/api_lib.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/api_msg.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/err.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/netbuf.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/netdb.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/netifapi.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/sockets.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/api/tcpip.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/def.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/dns.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/inet_chksum.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/init.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ip.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/mem.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/memp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/netif.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/pbuf.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/raw.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/stats.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/sys.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/tcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/tcp_in.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/tcp_out.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/timeouts.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/udp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/autoip.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/dhcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/etharp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/icmp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/igmp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/ip4.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/ip4_addr.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv4/ip4_frag.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/dhcp6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/ethip6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/icmp6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/inet6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/ip6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/ip6_addr.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/ip6_frag.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/mld6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/core/ipv6/nd6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/api.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/arch.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/autoip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/debug.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/def.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/dhcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/dhcp6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/dns.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/err.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/errno.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/etharp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ethip6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/icmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/icmp6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/igmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/inet.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/inet_chksum.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/init.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip_addr.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip4.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip4_addr.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip4_frag.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip6_addr.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/ip6_frag.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/mem.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/memp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/mld6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/nd6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/netbuf.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/netdb.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/netif.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/netifapi.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/opt.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/pbuf.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/raw.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/sio.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/snmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/sockets.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/stats.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/sys.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/tcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/tcpip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/timeouts.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/udp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/priv/api_msg.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/priv/memp_priv.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/priv/memp_std.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/priv/tcp_priv.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/priv/tcpip_priv.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/autoip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/dhcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/dns.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/etharp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/ethernet.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/icmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/icmp6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/igmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/ip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/ip4.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/ip6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/mld6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/nd6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/tcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/lwip/prot/udp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/etharp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ethernet.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/lowpan6.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/lowpan6_opts.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/slipif.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppoe.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/posix/errno.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/posix/netdb.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/posix/sys/socket.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ethernet.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/lowpan6.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/slipif.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/auth.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/ccp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/chap-md5.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/chap-new.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/chap_ms.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/demand.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/eap.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/eui64.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/fsm.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/ipcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/ipv6cp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/lcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/lwip_ecp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/magic.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/mppe.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/multilink.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/ppp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/pppapi.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/pppcrypt.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/pppoe.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/pppol2tp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/pppos.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/upap.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/utils.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/netif/ppp/vj.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ccp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/chap-md5.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/chap-new.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/chap_ms.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/eap.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ecp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/eui64.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/fsm.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ipcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ipv6cp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/lcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/magic.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/mppe.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ppp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ppp_impl.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/ppp_opts.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppapi.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppcrypt.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppdebug.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppoe.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppol2tp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/pppos.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/upap.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/vj.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/polarssl/arc4.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/polarssl/des.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/polarssl/md4.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/polarssl/md5.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_2.0.0/src/include/netif/ppp/polarssl/sha1.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/croutine.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/event_groups.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/FreeRTOS.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/list.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/mpu_wrappers.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/portable.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/projdefs.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/queue.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/semphr.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/StackMacros.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/task.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/timers.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/deprecated_definitions.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/freertos_tasks_c_additions.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/croutine.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/list.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/queue.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/tasks.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/timers.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/event_groups.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/aes.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/aesni.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/arc4.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/asn1.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/asn1write.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/base64.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/bignum.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/blowfish.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/bn_mul.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/camellia.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ccm.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/certs.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/check_config.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/cipher.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/cipher_internal.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/compat-1.3.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/config.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ctr_drbg.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/debug.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/des.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/dhm.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ecdh.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ecdsa.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ecjpake.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ecp.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/entropy.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/entropy_poll.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/error.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/gcm.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/havege.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/hmac_drbg.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/md.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/md_internal.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/md2.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/md4.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/md5.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/memory_buffer_alloc.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/net.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/oid.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/padlock.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/pem.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/pk.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/pk_internal.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/pkcs5.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/pkcs11.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/pkcs12.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/platform.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ripemd160.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/rsa.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/sha1.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/sha256.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/sha512.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ssl.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ssl_cache.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ssl_ciphersuites.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ssl_cookie.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ssl_internal.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/ssl_ticket.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/threading.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/timing.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/version.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/x509.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/x509_crl.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/x509_crt.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/x509_csr.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/include/mbedtls/xtea.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/aes.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/aesni.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/arc4.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/asn1parse.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/asn1write.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/base64.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/bignum.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/blowfish.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/camellia.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ccm.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/certs.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/cipher.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/cipher_wrap.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ctr_drbg.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/debug.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/des.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/dhm.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ecdh.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ecdsa.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ecjpake.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ecp.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ecp_curves.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/entropy.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/entropy_poll.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/error.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/gcm.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/havege.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/hmac_drbg.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/md.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/md_wrap.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/md2.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/md4.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/md5.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/memory_buffer_alloc.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/oid.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/padlock.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pem.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pk.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pk_wrap.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pkcs5.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pkcs11.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pkcs12.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pkparse.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/pkwrite.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/platform.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ripemd160.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/rsa.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/sha1.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/sha256.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/sha512.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_cache.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_ciphersuites.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_cli.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_cookie.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_srv.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_ticket.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/ssl_tls.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/threading.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/timing.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/version.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/version_features.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509_create.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509_crl.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509_crt.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509_csr.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509write_crt.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/x509write_csr.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/library/xtea.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/port/ksdk/ksdk_mbedtls.c"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/port/ksdk/ksdk_mbedtls_config.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/port/ksdk/sha1_alt.h"
"${ProjDirPath}/../../../../../../../middleware/mbedtls_2.3.0/port/ksdk/sha256_alt.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_gpio.c"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_smc.h"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_smc.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_flash.c"
"${ProjDirPath}/../../../../../../../devices/MK64F12/drivers/fsl_flash.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MK64FN1M0xxx12_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MK64FN1M0xxx12_flash.ld -static")

TARGET_LINK_LIBRARIES(lwip_httpssrv_mbedTLS_freertos.elf -Wl,--start-group)
target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf debug m)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf debug c)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf debug gcc)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf debug nosys)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf optimized m)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf optimized c)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf optimized gcc)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf optimized nosys)

link_directories(${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/asm-cm4-cm7)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf debug ${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/asm-cm4-cm7/lib_mmcau.a)

link_directories(${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/asm-cm4-cm7)

target_link_libraries(lwip_httpssrv_mbedTLS_freertos.elf optimized ${ProjDirPath}/../../../../../../../middleware/mmcau_2.0.0/asm-cm4-cm7/lib_mmcau.a)

TARGET_LINK_LIBRARIES(lwip_httpssrv_mbedTLS_freertos.elf -Wl,--end-group)

