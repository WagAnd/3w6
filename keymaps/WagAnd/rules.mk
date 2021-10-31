# HoRRoR77 https://github.com/WagAnd
# 3w6/rev2 keyboard by weteor https://github.com/weteor/3W6
# settings inspired by Manna-Harbour Miryoku https://github.com/manna-harbour/miryoku

# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
AUTO_SHIFT_ENABLE = yes # Auto Shift
UNICODE_ENABLE = yes
CUSTOM_MATRIX = lite
NO_USB_STARTUP_CHECK = yes
LTO_ENABLE = no

SRC += matrix.c
QUANTUM_LIB_SRC += i2c_master.c
