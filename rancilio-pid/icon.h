#define rancilio_logo_width 45
#define rancilio_logo_height 45

#define gaggia_logo_width 125
#define gaggia_logo_height 36

#define ecm_logo_width 105
#define ecm_logo_height 45

#define general_logo_width 45
#define general_logo_height 45

#define status_icon_width 11
#define status_icon_height 9

static const unsigned char rancilio_logo_bits [] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf8, 0x03, 0x00,
   0xf8, 0x01, 0x00, 0xfe, 0x0f, 0x00, 0xf8, 0x03, 0x80, 0xff, 0x3f, 0x00,
   0xf8, 0x07, 0xc0, 0xff, 0x7f, 0x00, 0xf0, 0x0f, 0xe0, 0xff, 0xff, 0x00,
   0xe0, 0x1f, 0xe0, 0x0f, 0xff, 0x00, 0xc0, 0x3f, 0xf0, 0x07, 0xfc, 0x01,
   0x80, 0x7f, 0xf0, 0x03, 0xf8, 0x01, 0x00, 0xff, 0xf0, 0x01, 0xf0, 0x03,
   0x00, 0xfe, 0xf1, 0x01, 0xf0, 0x03, 0x00, 0xfc, 0xf1, 0x01, 0xe0, 0x03,
   0x00, 0xf8, 0xf3, 0x01, 0xe0, 0x03, 0x00, 0xf8, 0xf3, 0x01, 0xf0, 0x03,
   0x00, 0xf8, 0xf1, 0x01, 0xf0, 0x03, 0x00, 0xfc, 0xf1, 0x01, 0xf8, 0x01,
   0x00, 0xfe, 0xf0, 0x01, 0xfc, 0x00, 0x00, 0x7e, 0xf0, 0x01, 0xfe, 0x00,
   0x00, 0x3f, 0xf0, 0x01, 0x7f, 0x00, 0x80, 0x3f, 0xf0, 0x81, 0x3f, 0x00,
   0xc0, 0x1f, 0xf0, 0x81, 0x1f, 0x00, 0xe0, 0x0f, 0xf0, 0xc1, 0x1f, 0x00,
   0xe0, 0x07, 0xf0, 0xe1, 0x0f, 0x00, 0xf0, 0x07, 0xf0, 0xf1, 0x07, 0x00,
   0xf0, 0x03, 0xf0, 0xf9, 0x03, 0x00, 0xf8, 0x01, 0xf0, 0xf9, 0x01, 0x00,
   0xf8, 0x01, 0xf0, 0xfd, 0x01, 0x00, 0xf8, 0x00, 0xf0, 0xf9, 0x03, 0x00,
   0xf8, 0x00, 0xf0, 0xf9, 0x07, 0x00, 0xf8, 0x01, 0xf8, 0xf1, 0x0f, 0x00,
   0xf8, 0x01, 0xf8, 0xe1, 0x1f, 0x00, 0xf0, 0x03, 0xfc, 0xc0, 0x3f, 0x00,
   0xf0, 0x07, 0xfe, 0x80, 0x7f, 0x00, 0xe0, 0x9f, 0x7f, 0x00, 0xff, 0x00,
   0xe0, 0xff, 0x7f, 0x00, 0xfe, 0x01, 0xc0, 0xff, 0x3f, 0x00, 0xfc, 0x03,
   0x80, 0xff, 0x1f, 0x00, 0xf8, 0x03, 0x00, 0xfe, 0x07, 0x00, 0xf0, 0x01,
   0x00, 0xf8, 0x01, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char gaggia_logo_bits [] PROGMEM = {
   0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x06, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1e,
   0x00, 0x80, 0x07, 0xf0, 0x01, 0x80, 0x07, 0x00, 0x00, 0x7e, 0x00, 0x00,
   0x0f, 0x00, 0x80, 0x1f, 0x00, 0xe0, 0x07, 0xf0, 0x01, 0x80, 0x07, 0x00,
   0x00, 0x7f, 0x00, 0x00, 0x0f, 0x00, 0xc0, 0x1f, 0x00, 0xf0, 0x07, 0xf0,
   0x01, 0x80, 0x07, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x0f, 0x00, 0xe0, 0x0f,
   0x00, 0xf8, 0x03, 0xf0, 0x01, 0x80, 0x07, 0x00, 0xc0, 0x0f, 0x00, 0x80,
   0x1f, 0x00, 0xf0, 0x03, 0x00, 0xfc, 0x00, 0xf0, 0x01, 0xc0, 0x0f, 0x00,
   0xe0, 0x07, 0x00, 0x80, 0x1f, 0x00, 0xf8, 0x01, 0x00, 0x7e, 0x00, 0xf0,
   0x01, 0xc0, 0x0f, 0x00, 0xf0, 0x03, 0x00, 0x80, 0x1f, 0x00, 0xfc, 0x00,
   0x00, 0x3f, 0x00, 0xf0, 0x01, 0xc0, 0x0f, 0x00, 0xf0, 0x01, 0x00, 0xc0,
   0x3f, 0x00, 0x7c, 0x00, 0x00, 0x1f, 0x00, 0xf0, 0x01, 0xe0, 0x1f, 0x00,
   0xf8, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x3e, 0x00, 0x80, 0x0f, 0x00, 0xf0,
   0x01, 0xe0, 0x1f, 0x00, 0x78, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x1e, 0x00,
   0x80, 0x07, 0x00, 0xf0, 0x01, 0xe0, 0x1f, 0x00, 0x7c, 0x00, 0x00, 0xc0,
   0x3f, 0x00, 0x1f, 0x00, 0xc0, 0x07, 0x00, 0xf0, 0x01, 0xe0, 0x1f, 0x00,
   0x3c, 0x00, 0x00, 0xe0, 0x79, 0x00, 0x0f, 0x00, 0xc0, 0x03, 0x00, 0xf0,
   0x01, 0xf0, 0x3c, 0x00, 0x3c, 0x00, 0x00, 0xe0, 0x79, 0x00, 0x0f, 0x00,
   0xc0, 0x03, 0x00, 0xf0, 0x01, 0xf0, 0x3c, 0x00, 0x3c, 0x00, 0x00, 0xe0,
   0x79, 0x00, 0x0f, 0x00, 0xc0, 0x03, 0x00, 0xf0, 0x01, 0xf0, 0x3c, 0x00,
   0x3c, 0x00, 0x00, 0xe0, 0x79, 0x00, 0x0f, 0x00, 0xc0, 0x03, 0x00, 0xf0,
   0x01, 0xf0, 0x3c, 0x00, 0x3c, 0xe0, 0x01, 0xf0, 0xf9, 0x00, 0x0f, 0x78,
   0xc0, 0x03, 0x1e, 0xf0, 0x01, 0xf8, 0x7c, 0x00, 0x3c, 0xe0, 0x01, 0xf0,
   0xf0, 0x00, 0x0f, 0x78, 0xc0, 0x03, 0x1e, 0xf0, 0x01, 0x78, 0x78, 0x00,
   0x3c, 0xe0, 0x01, 0xf0, 0xf0, 0x00, 0x0f, 0x78, 0xc0, 0x03, 0x1e, 0xf0,
   0x01, 0x78, 0x78, 0x00, 0x3c, 0xe0, 0x01, 0xf8, 0xf0, 0x01, 0x0f, 0x78,
   0xc0, 0x03, 0x1e, 0xf0, 0x01, 0x7c, 0xf8, 0x00, 0x7c, 0xe0, 0x01, 0xf8,
   0xff, 0x01, 0x1f, 0x78, 0xc0, 0x07, 0x1e, 0xf0, 0x01, 0xfc, 0xff, 0x00,
   0x7c, 0xe0, 0x01, 0xf8, 0xff, 0x01, 0x1f, 0x78, 0xc0, 0x07, 0x1e, 0xf0,
   0x01, 0xfc, 0xff, 0x00, 0xf8, 0xe0, 0x01, 0xf8, 0xff, 0x01, 0x3e, 0x78,
   0x80, 0x0f, 0x1e, 0xf0, 0x01, 0xfc, 0xff, 0x00, 0xf8, 0xe0, 0x01, 0xfc,
   0xff, 0x03, 0x3e, 0x78, 0x80, 0x0f, 0x1e, 0xf0, 0x01, 0xfe, 0xff, 0x01,
   0xf0, 0xe1, 0x01, 0xfc, 0xff, 0x03, 0x7c, 0x78, 0x00, 0x1f, 0x1e, 0xf0,
   0x01, 0xfe, 0xff, 0x01, 0xf0, 0xe3, 0x01, 0x3c, 0xc0, 0x03, 0xfc, 0x78,
   0x00, 0x3f, 0x1e, 0xf0, 0x01, 0x1e, 0xe0, 0x01, 0xe0, 0xe7, 0x01, 0x3e,
   0xc0, 0x07, 0xf8, 0x79, 0x00, 0x7e, 0x1e, 0xf0, 0x01, 0x1f, 0xe0, 0x03,
   0xc0, 0xff, 0x01, 0x3e, 0xc0, 0x07, 0xf0, 0x7f, 0x00, 0xfc, 0x1f, 0xf0,
   0x01, 0x1f, 0xe0, 0x03, 0x80, 0xff, 0x01, 0x1e, 0x80, 0x07, 0xe0, 0x7f,
   0x00, 0xf8, 0x1f, 0xf0, 0x01, 0x0f, 0xc0, 0x03, 0x00, 0xff, 0x01, 0x1e,
   0x80, 0x07, 0xc0, 0x7f, 0x00, 0xf0, 0x1f, 0xf0, 0x01, 0x0f, 0xc0, 0x03,
   0x00, 0xfc, 0x01, 0x1f, 0x80, 0x0f, 0x00, 0x7f, 0x00, 0xc0, 0x1f, 0xf0,
   0x81, 0x0f, 0xc0, 0x07, 0x00, 0xf0, 0x01, 0x0f, 0x00, 0x0f, 0x00, 0x7c,
   0x00, 0x00, 0x1f, 0xf0, 0x81, 0x07, 0x80, 0x07, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f };

static const unsigned char ecm_logo_bits [] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x3f, 0x80,
   0x7f, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x7f, 0x00, 0xfe,
   0x7f, 0xe0, 0xff, 0x01, 0xe0, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
   0x80, 0xff, 0x7f, 0xe0, 0xff, 0x03, 0xf0, 0xff, 0x01, 0x00, 0x00, 0xc0,
   0xff, 0x7f, 0xc0, 0xff, 0x7f, 0xf0, 0xff, 0x03, 0xf0, 0xff, 0x03, 0x00,
   0x00, 0xf0, 0xff, 0x7f, 0xf0, 0xff, 0x7f, 0xf8, 0xff, 0x07, 0xf8, 0xff,
   0x03, 0x00, 0x00, 0xf8, 0xff, 0x7f, 0xf0, 0xff, 0x7f, 0xf8, 0xff, 0x07,
   0xf8, 0xff, 0x03, 0x00, 0x00, 0xfc, 0xff, 0x7f, 0xfc, 0xff, 0x7f, 0xf8,
   0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x00, 0xfe, 0xff, 0x7f, 0xfc, 0xff,
   0x7f, 0xf8, 0xff, 0x07, 0xfc, 0xff, 0x07, 0x00, 0x00, 0xff, 0xff, 0x7f,
   0xfe, 0xff, 0x7f, 0xf8, 0xff, 0x0f, 0xfc, 0xff, 0x07, 0x00, 0x80, 0xff,
   0xff, 0x3f, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0x0f, 0xfc, 0xff, 0x07, 0x00,
   0x80, 0xff, 0x3f, 0x00, 0xff, 0xff, 0x3f, 0xfc, 0xff, 0x0f, 0xfe, 0xff,
   0x07, 0x00, 0xc0, 0xff, 0x1f, 0x80, 0xff, 0xff, 0x00, 0xfc, 0xff, 0x0f,
   0xfe, 0xff, 0x07, 0x00, 0xc0, 0xff, 0x07, 0x80, 0xff, 0x1f, 0x00, 0xfc,
   0xff, 0x1f, 0xfe, 0xff, 0x07, 0x00, 0xc0, 0xff, 0x03, 0xc0, 0xff, 0x0f,
   0x00, 0xfc, 0xff, 0x1f, 0xfe, 0xff, 0x07, 0x00, 0xe0, 0xff, 0x03, 0xc0,
   0xff, 0x07, 0x00, 0xfc, 0xff, 0x1f, 0xff, 0xff, 0x07, 0x00, 0xe0, 0xff,
   0x03, 0xc0, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x1f, 0xff, 0xff, 0x07, 0x00,
   0xe0, 0xff, 0xff, 0xc7, 0xff, 0x03, 0x00, 0xfc, 0xdf, 0x3f, 0xff, 0xfe,
   0x07, 0x00, 0xe0, 0xff, 0xff, 0xe7, 0xff, 0x03, 0x00, 0xfc, 0xdf, 0x3f,
   0xff, 0xfe, 0x07, 0x00, 0xe0, 0xff, 0xff, 0xe7, 0xff, 0x01, 0x00, 0xfc,
   0xdf, 0xbf, 0x7f, 0xfe, 0x0f, 0x00, 0xe0, 0xff, 0xff, 0xe7, 0xff, 0x01,
   0x00, 0xfc, 0x8f, 0xff, 0x7f, 0xfe, 0x0f, 0x00, 0xe0, 0xff, 0xff, 0xe7,
   0xff, 0x01, 0x00, 0xfc, 0x8f, 0xff, 0x7f, 0xfe, 0x0f, 0x00, 0xe0, 0xff,
   0xff, 0xe7, 0xff, 0x01, 0x00, 0xfe, 0x8f, 0xff, 0x3f, 0xfe, 0x0f, 0x00,
   0xe0, 0xff, 0xff, 0xe7, 0xff, 0x03, 0x00, 0xfe, 0x8f, 0xff, 0x3f, 0xfe,
   0x0f, 0x00, 0xe0, 0xff, 0xff, 0xe7, 0xff, 0x03, 0x00, 0xfe, 0x8f, 0xff,
   0x3f, 0xfe, 0x0f, 0x00, 0xe0, 0xff, 0x03, 0xc0, 0xff, 0x03, 0x00, 0xfe,
   0x0f, 0xff, 0x3f, 0xfe, 0x0f, 0x00, 0xe0, 0xff, 0x03, 0xc0, 0xff, 0x07,
   0x00, 0xfe, 0x0f, 0xff, 0x1f, 0xfe, 0x0f, 0x00, 0xe0, 0xff, 0x03, 0xc0,
   0xff, 0x07, 0x00, 0xfe, 0x0f, 0xff, 0x1f, 0xfe, 0x0f, 0x00, 0xc0, 0xff,
   0x07, 0x80, 0xff, 0x1f, 0x00, 0xfe, 0x0f, 0xff, 0x1f, 0xfe, 0x0f, 0x00,
   0xc0, 0xff, 0x0f, 0x80, 0xff, 0x3f, 0x00, 0xfe, 0x0f, 0xfe, 0x1f, 0xfc,
   0x0f, 0x00, 0x80, 0xff, 0x3f, 0x80, 0xff, 0xff, 0x0f, 0xfe, 0x0f, 0xfe,
   0x0f, 0xfc, 0x0f, 0x00, 0x80, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff,
   0x0f, 0xfe, 0x0f, 0xfc, 0x1f, 0x00, 0x00, 0xff, 0xff, 0x7f, 0xfe, 0xff,
   0xff, 0xff, 0x0f, 0xfe, 0x0f, 0xfc, 0x1f, 0x00, 0x00, 0xff, 0xff, 0x7f,
   0xfe, 0xff, 0xff, 0xff, 0x07, 0xfc, 0x0f, 0xfc, 0x1f, 0x00, 0x00, 0xfe,
   0xff, 0x7f, 0xfc, 0xff, 0xff, 0xff, 0x07, 0xfc, 0x07, 0xfc, 0x1f, 0x00,
   0x00, 0xfc, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0xff, 0x07, 0xfc, 0x07, 0xfc,
   0x1f, 0x00, 0x00, 0xf0, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0xff, 0x07, 0xfc,
   0x07, 0xfc, 0x1f, 0x00, 0x00, 0xe0, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0xff,
   0x07, 0xf8, 0x07, 0xfc, 0x1f, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0xff,
   0xff, 0xff, 0x07, 0xf8, 0x03, 0xfc, 0x1f, 0x00, 0x00, 0x00, 0xfe, 0x7f,
   0x00, 0xfc, 0xff, 0xff, 0x07, 0xf8, 0x03, 0xfc, 0x1f, 0x00, 0x00, 0x00,
   0xe0, 0x3f, 0x00, 0xc0, 0xff, 0xff, 0x07, 0xf0, 0x01, 0xf8, 0x0f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static const unsigned char general_logo_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00,
   0x00, 0x3c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x78, 0x00, 0x00, 0x00,
   0x00, 0x07, 0x70, 0x00, 0x00, 0x00, 0x80, 0xc3, 0xe0, 0x00, 0x00, 0x00,
   0x80, 0xc3, 0xc1, 0x00, 0x00, 0x00, 0xc0, 0x81, 0xc1, 0x01, 0x00, 0x00,
   0xc0, 0x01, 0xc1, 0x01, 0x00, 0x00, 0xc0, 0x00, 0x83, 0x01, 0x00, 0x00,
   0xc0, 0x00, 0x83, 0x01, 0x00, 0x00, 0xe0, 0x00, 0x83, 0x03, 0x0f, 0x00,
   0xe0, 0x00, 0x83, 0xe3, 0x7f, 0x00, 0x60, 0x00, 0x83, 0xff, 0xff, 0x01,
   0x60, 0x80, 0x83, 0x3f, 0xc0, 0x01, 0x60, 0x80, 0x81, 0x0f, 0x80, 0x03,
   0x60, 0xc0, 0xc1, 0x03, 0x00, 0x03, 0x60, 0xc0, 0xe0, 0x03, 0x18, 0x07,
   0x60, 0xc0, 0xf0, 0x01, 0x18, 0x07, 0xe0, 0xe0, 0xf0, 0x00, 0x18, 0x06,
   0xe0, 0xc0, 0x38, 0x00, 0x1c, 0x06, 0xc0, 0xc0, 0x18, 0x40, 0x0e, 0x06,
   0xc0, 0xc0, 0x1c, 0xf0, 0x07, 0x06, 0xc0, 0x81, 0x1d, 0xf8, 0x83, 0x03,
   0xc0, 0x01, 0x0e, 0x1c, 0x80, 0x03, 0x80, 0x03, 0x0e, 0x0e, 0xc0, 0x01,
   0x80, 0x03, 0x06, 0x06, 0xc0, 0x01, 0x00, 0x07, 0x03, 0x07, 0xc0, 0x00,
   0x00, 0x0e, 0x03, 0x07, 0xe0, 0x00, 0x00, 0x1e, 0x07, 0x03, 0x70, 0x00,
   0x00, 0xf8, 0x07, 0x02, 0x78, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x06, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x80, 0x0f, 0x00,
   0x00, 0x00, 0x1c, 0xe0, 0x03, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x01, 0x00,
   0x00, 0x00, 0xf0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static const unsigned char blynk_not_ok_bits[] PROGMEM = {
   0x00, 0x00, 0xfe, 0x03, 0xe2, 0x02, 0xda, 0x02, 0xe2, 0x02, 0xda, 0x03,
   0xe2, 0x02, 0xfe, 0x03, 0x00, 0x00 };

static const unsigned char wifi_not_ok_bits[] PROGMEM = {
   0x00, 0x00, 0xfe, 0x03, 0xe2, 0x02, 0xde, 0x02, 0xb2, 0x02, 0xae, 0x03,
   0xaa, 0x02, 0xfe, 0x03, 0x00, 0x00 };

static const unsigned char mqtt_not_ok_bits[] PROGMEM = {
   0x00, 0x00, 0xfe, 0x03, 0xba, 0x02, 0x92, 0x02, 0xaa, 0x02, 0xba, 0x03,
   0xba, 0x02, 0xfe, 0x03, 0x00, 0x00 };

static const unsigned char profile_1_bits[] PROGMEM = {
   0x00, 0x00, 0xfe, 0x03, 0x02, 0x02, 0x22, 0x02, 0x22, 0x02, 0x22, 0x02,
   0x02, 0x02, 0xfe, 0x03, 0x00, 0x00 };

static const unsigned char profile_2_bits[] PROGMEM = {
   0x00, 0x00, 0xfe, 0x03, 0x02, 0x02, 0x52, 0x02, 0x52, 0x02, 0x52, 0x02,
   0x02, 0x02, 0xfe, 0x03, 0x00, 0x00 };

static const unsigned char profile_3_bits[] PROGMEM = {
   0x00, 0x00, 0xfe, 0x03, 0x02, 0x02, 0xaa, 0x02, 0xaa, 0x02, 0xaa, 0x02,
   0x02, 0x02, 0xfe, 0x03, 0x00, 0x00 };