SRC += features/autocorrection.c
# MCU name
MCU = RP2040
# BOARD = GENERIC_PROMICRO_RP2040 #uncomment if not using blok
# Bootloader selection
BOOTLOADER = rp2040

CONVERT_TO=kb2040
CAPS_WORD_ENABLE = yes
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
OLED_ENABLE = yes
LTO_ENABLE      = no

USER_NAME := codymathis123