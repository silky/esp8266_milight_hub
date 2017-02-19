#ifndef _MILIGHT_BUTTONS
#define _MILIGHT_BUTTONS 

enum MiLightRgbwButton {
  RGBW_ALL_ON            = 0x01,
  RGBW_ALL_OFF           = 0x02,
  RGBW_GROUP_1_ON        = 0x03,
  RGBW_GROUP_1_OFF       = 0x04,
  RGBW_GROUP_2_ON        = 0x05,
  RGBW_GROUP_2_OFF       = 0x06,
  RGBW_GROUP_3_ON        = 0x07,
  RGBW_GROUP_3_OFF       = 0x08,
  RGBW_GROUP_4_ON        = 0x09,
  RGBW_GROUP_4_OFF       = 0x0A,
  RGBW_SPEED_UP          = 0x0B, 
  RGBW_SPEED_DOWN        = 0x0C, 
  RGBW_DISCO_MODE        = 0x0D,
  RGBW_BRIGHTNESS        = 0x0E,
  RGBW_COLOR             = 0x0F,
  RGBW_ALL_MAX_LEVEL     = 0x11,
  RGBW_ALL_MIN_LEVEL     = 0x12,
  
  // These are the only mechanism (that I know of) to disable RGB and set the
  // color to white.
  RGBW_GROUP_1_MAX_LEVEL = 0x13,
  RGBW_GROUP_1_MIN_LEVEL = 0x14,
  RGBW_GROUP_2_MAX_LEVEL = 0x15,
  RGBW_GROUP_2_MIN_LEVEL = 0x16,
  RGBW_GROUP_3_MAX_LEVEL = 0x17,
  RGBW_GROUP_3_MIN_LEVEL = 0x18,
  RGBW_GROUP_4_MAX_LEVEL = 0x19,
  RGBW_GROUP_4_MIN_LEVEL = 0x1A,
};

#endif