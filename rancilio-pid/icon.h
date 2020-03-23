#define logo_width 23
#define logo_height 58
#define rancilio_logo_width 45
#define rancilio_logo_height 45
#define stream_logo_width 45
#define stream_logo_height 45
static const unsigned char PROGMEM logo_bits[] = {
0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x01, 0xff, 0x00, 0x03, 0x83, 0x80, 0x03, 0x01, 0x80, 0x06, 
  0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 
  0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 
  0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 
  0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 
  0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 
  0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 
  0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x0e, 0x00, 0xe0, 0x18, 0x00, 0x70, 0x38, 0x00, 
  0x30, 0x30, 0x7c, 0x18, 0x30, 0xfe, 0x18, 0x61, 0xff, 0x18, 0x61, 0xff, 0x08, 0x61, 0xff, 0x08, 
  0x61, 0xff, 0x08, 0x21, 0xfe, 0x18, 0x30, 0xfc, 0x18, 0x30, 0x38, 0x30, 0x18, 0x00, 0x30, 0x0c, 
  0x00, 0xe0, 0x07, 0x01, 0xc0, 0x03, 0xff, 0x80, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00 };
 static const unsigned char PROGMEM rancilio_logo_bits [] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0x80, 0x00, 0x7f, 0xf0, 0x00, 0x1f, 0xc0, 
	0x01, 0xff, 0xfc, 0x00, 0x1f, 0xe0, 0x03, 0xff, 0xfe, 0x00, 0x0f, 0xf0, 0x07, 0xff, 0xfe, 0x00, 
	0x07, 0xf8, 0x07, 0xf0, 0xff, 0x00, 0x03, 0xfc, 0x0f, 0xe0, 0x3f, 0x00, 0x01, 0xfe, 0x0f, 0xc0, 
	0x1f, 0x80, 0x00, 0xff, 0x0f, 0x80, 0x0f, 0x80, 0x00, 0x7f, 0x8f, 0x80, 0x0f, 0x80, 0x00, 0x3f, 
	0x8f, 0x80, 0x0f, 0x80, 0x00, 0x1f, 0xcf, 0x80, 0x0f, 0x80, 0x00, 0x1f, 0xcf, 0x80, 0x0f, 0x80, 
	0x00, 0x1f, 0x8f, 0x80, 0x1f, 0x80, 0x00, 0x3f, 0x8f, 0x80, 0x3f, 0x80, 0x00, 0x7f, 0x0f, 0x80, 
	0x3f, 0x00, 0x00, 0x7e, 0x0f, 0x80, 0x7f, 0x00, 0x00, 0xfc, 0x0f, 0x80, 0xfe, 0x00, 0x01, 0xfc, 
	0x0f, 0x81, 0xfc, 0x00, 0x03, 0xf8, 0x0f, 0x81, 0xf8, 0x00, 0x07, 0xf0, 0x0f, 0x83, 0xf8, 0x00, 
	0x07, 0xe0, 0x0f, 0x87, 0xf0, 0x00, 0x0f, 0xe0, 0x0f, 0x8f, 0xe0, 0x00, 0x0f, 0xc0, 0x0f, 0x9f, 
	0xc0, 0x00, 0x1f, 0x80, 0x0f, 0x9f, 0x80, 0x00, 0x1f, 0x80, 0x0f, 0xbf, 0x80, 0x00, 0x1f, 0x00, 
	0x0f, 0x9f, 0xc0, 0x00, 0x1f, 0x00, 0x0f, 0x9f, 0xe0, 0x00, 0x1f, 0x80, 0x1f, 0x8f, 0xf0, 0x00, 
	0x1f, 0x80, 0x1f, 0x87, 0xf8, 0x00, 0x0f, 0xc0, 0x3f, 0x03, 0xfc, 0x00, 0x0f, 0xe0, 0x7f, 0x01, 
	0xfe, 0x00, 0x07, 0xf9, 0xfe, 0x00, 0xff, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x7f, 0x80, 0x03, 0xff, 
	0xfc, 0x00, 0x3f, 0x80, 0x01, 0xff, 0xf8, 0x00, 0x1f, 0x80, 0x00, 0x7f, 0xe0, 0x00, 0x0f, 0x80, 
	0x00, 0x1f, 0x80, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static const unsigned char PROGMEM stream_logo_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xb0, 0x00, 
  0x00, 0x00, 0x00, 0x3d, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x3f, 
  0xb8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xbf, 0x80, 0x00, 0x00, 
  0x00, 0x7f, 0xbf, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xbf, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0xbf, 0xff, 
  0x80, 0x00, 0x00, 0x7f, 0xbf, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xbf, 0xff, 0xfe, 0x00, 0x00, 0x7f, 
  0xbf, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xbf, 0xff, 0xff, 0xc0, 0x00, 0x7f, 0xbf, 0xff, 0xf1, 0xc0, 
  0x00, 0x7f, 0xff, 0xff, 0xf0, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xf1, 0xc0, 0x00, 0xff, 0x1f, 0xff, 
  0xf1, 0xc0, 0x01, 0xff, 0x0f, 0xff, 0xf3, 0x80, 0x01, 0xff, 0x0f, 0xff, 0xe3, 0x80, 0x03, 0xff, 
  0x0f, 0xff, 0xe7, 0x80, 0x03, 0xff, 0xff, 0xff, 0xe7, 0x00, 0x07, 0x83, 0xf8, 0x01, 0xc7, 0x00, 
  0x07, 0x01, 0xf0, 0x01, 0xce, 0x00, 0x0f, 0x06, 0xec, 0x03, 0xce, 0x00, 0x0e, 0x06, 0xec, 0x03, 
  0xdc, 0x00, 0x1e, 0x06, 0xec, 0x03, 0x9c, 0x00, 0x1c, 0x06, 0xec, 0x03, 0xb8, 0x00, 0x1c, 0x0e, 
  0xec, 0x07, 0xf8, 0x00, 0x38, 0x0e, 0xee, 0x07, 0xf0, 0x00, 0x38, 0x0e, 0xee, 0x07, 0xc0, 0x00, 
  0x38, 0x0e, 0xee, 0x0f, 0x00, 0x00, 0x1e, 0x0c, 0xee, 0x06, 0x00, 0x00, 0x1f, 0x80, 0xe4, 0x0e, 
  0x00, 0x00, 0x0f, 0xe0, 0xe0, 0x0e, 0x00, 0x00, 0x03, 0xff, 0x60, 0x0c, 0x00, 0x00, 0x00, 0x3f, 
  0xc0, 0x1c, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x1c, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
