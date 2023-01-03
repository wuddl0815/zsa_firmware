/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 15

#define FIRMWARE_VERSION u8"y9Xol/Bl6dw"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_16BIT
#define COMBO_COUNT 4
#define COMBO_ONLY_FROM_LAYER 0

#define RGB_MATRIX_STARTUP_SPD 60
