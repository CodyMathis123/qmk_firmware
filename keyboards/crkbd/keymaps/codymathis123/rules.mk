SRC += features/autocorrection.c
# MCU name
MCU = RP2040
# BOARD = GENERIC_PROMICRO_RP2040 #uncomment if not using blok
# Bootloader selection
BOOTLOADER = rp2040

MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift
COMBO_ENABLE = yes # Enable combos
NKRO_ENABLE = yes
CONSOLE_ENABLE = no
CONVERT_TO=kb2040
CAPS_WORD_ENABLE = yes
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
OLED_ENABLE = yes
LTO_ENABLE      = no

USER_NAME := codymathis123