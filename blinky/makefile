# ----- Configuration ---------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-
PROJECT_NAME     = blinky

SDK_ROOT = ../libs/SDK_2.2_FRDM-K64F

# ----- Sources ---------------------------------------------------------------

SYMBOLS += CPU_MK64FN1M0VLL12

INCLUDE_DIRS += $(SDK_ROOT)/CMSIS/Include
INCLUDE_DIRS += $(SDK_ROOT)/CMSIS/Driver/Include
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12/cmsis_drivers
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12/drivers
INCLUDE_DIRS += $(SDK_ROOT)/devices/MK64F12/utilities

SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/system_MK64F12.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/gcc/startup_MK64F12.S

SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_gpio.c
SOURCE_FILES += $(SDK_ROOT)/devices/MK64F12/drivers/fsl_clock.c

INCLUDE_DIRS += ./src/config
SOURCE_FILES += $(shell find ./src -iregex ".*\.\(cpp\)")

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -mcpu=cortex-m4
GCCFLAGS += -mthumb
GCCFLAGS += -mfloat-abi=hard
GCCFLAGS += -mfpu=fpv4-sp-d16

COMMON_CFLAGS += -O3

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

#CPPFLAGS +=

LDFLAGS += -T$(SDK_ROOT)/devices/MK64F12/gcc/MK64FN1M0xxx12_flash.ld

# ----- Rules -----------------------------------------------------------------

include ../libs/xXx/utils/rules.mk

download: $(EXECUTABLE)
	$(TOOLCHAIN_PREFIX)gdb -q -x download.gdb $<
