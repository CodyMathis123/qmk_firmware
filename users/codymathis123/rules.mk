MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift
COMBO_ENABLE = yes # Enable combos
NKRO_ENABLE = yes
ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += oled.c
	WPM_ENABLE = yes
endif