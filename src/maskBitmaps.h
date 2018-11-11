#ifndef maskBitmaps_h
#define maskBitmaps_h

const uint8_t PROGMEM GOLDFISH_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x08,0x18,0x1c,0x1c,0x1c,0x1c,0x08,0x1c,
};

const uint8_t PROGMEM SHARK_plus_mask[] = {
    // width, height,
    24, 8,
    // frame 0 
    0x00,0x00,0x00,0x08,0x00,0x20,0x20,0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x30,0x38,0x7c,0x7c,0x7c,0x7c,0x7c,0xfc,0xfc,0x7e,0x7f,0x7f,0x7d,0x7c,0x78,0x78,0x70,0x70,0x60,0x60,0x60,0x70,0x78,0xfc,
};

const uint8_t PROGMEM colon_plus_mask[] = {
    // width, height,
    1, 8,
    // frame 0 
    0x09,
    // mask 0 
    0x09,
};

const uint8_t PROGMEM currencySymbol_plus_mask[] = {
    // width, height,
    4, 8,
    // frame 0 
    0x1e,0x12,0x3f,0x12,
    // mask 0 
    0x1e,0x12,0x3f,0x12,
};

const uint8_t PROGMEM player_plus_mask[] = {
    // width, height,
    16, 16,
    // frame 0 
    0xc0,0xa0,0xa0,0x90,0x08,0x34,0xb2,0xb2,0x02,0x02,0x04,0x28,0x10,0xe0,0x00,0x00,0x00,0x00,0x00,0x87,0x78,0x87,0x84,0x07,0x27,0xa6,0x82,0x24,0xda,0x01,0x00,0x00,
    // mask 0 
    0xc0,0xe0,0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0xe0,0x00,0x00,0x00,0x00,0x00,0x87,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdb,0x01,0x00,0x00,
    // frame 1 
    0x60,0x50,0x50,0xc8,0x04,0x9a,0x59,0xd9,0x81,0x01,0x02,0x14,0x08,0xf0,0x00,0x00,0x00,0x00,0x00,0x03,0x7c,0x83,0x22,0xa3,0x83,0x03,0x81,0x7e,0x01,0x00,0x00,0x00,
    // mask 1 
    0x60,0x70,0x70,0xf8,0xfc,0xfe,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0xf0,0x00,0x00,0x00,0x00,0x00,0x03,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x01,0x00,0x00,0x00,
    // frame 2 
    0x00,0x00,0x78,0x84,0x02,0x01,0x21,0x31,0x31,0x21,0x01,0x02,0x84,0x78,0x00,0x00,0x00,0x00,0x00,0x61,0x9e,0x01,0x81,0x81,0x01,0x81,0x81,0x9e,0x60,0x00,0x00,0x00,
    // mask 2 
    0x00,0x00,0x78,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x78,0x00,0x00,0x00,0x00,0x00,0x61,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x60,0x00,0x00,0x00,
    // frame 3 
    0x00,0x20,0x58,0x84,0x02,0xc1,0x59,0xd9,0xd9,0x59,0xc1,0x02,0x84,0x58,0x20,0x00,0x00,0x00,0x1c,0x63,0x90,0x13,0x02,0x03,0x03,0x82,0x83,0x00,0x7f,0x00,0x00,0x00,
    // mask 3 
    0x00,0x20,0x78,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x78,0x20,0x00,0x00,0x00,0x1c,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,
    // frame 4 
    0xf0,0x48,0x84,0xe2,0x02,0xc2,0xe2,0xc2,0x02,0x6a,0x32,0x04,0x08,0xf0,0x00,0x00,0x25,0x26,0x44,0x41,0x9b,0x83,0x9b,0x9d,0x9c,0x9c,0x98,0x80,0x98,0x5b,0x24,0x18,
    // mask 4 
    0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x00,0x3d,0x3f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3c,0x18,
    // frame 5 
    0x00,0xf0,0x0c,0x32,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x32,0x0c,0xf0,0x00,0x00,0x07,0x18,0x20,0x40,0x90,0xb0,0xb0,0xb0,0xb0,0x90,0x90,0xc0,0x32,0x0d,0x00,
    // mask 5 
    0x00,0xf0,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf0,0x00,0x00,0x07,0x1f,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x0d,0x00,
    // frame 6 
    0xe0,0x10,0x08,0xc4,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0xc4,0x08,0xf0,0x00,0x07,0x08,0x18,0x2c,0x53,0x57,0x54,0xb7,0xb7,0xb4,0x97,0x83,0x80,0xf0,0x0f,0x00,
    // mask 6 
    0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x07,0x0f,0x1f,0x3f,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,
    // frame 7 
    0xe0,0x10,0x08,0x04,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x04,0x08,0xf0,0x00,0x07,0x08,0x18,0x20,0x43,0x46,0x54,0x54,0x54,0x54,0x56,0x43,0x40,0x30,0x0f,0x00,
    // mask 7 
    0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x07,0x0f,0x1f,0x3f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x0f,0x00,
};

const uint8_t PROGMEM pm_plus_mask[] = {
    // width, height,
    3, 8,
    // frame 0 
    0x0f,0x05,0x07,
    // mask 0 
    0x0f,0x05,0x07,
};

#endif