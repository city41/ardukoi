#ifndef nonMaskBitmaps_h
#define nonMaskBitmaps_h

const uint8_t PROGMEM city41Logo_tiles[] = {
    // width, height,
    16, 8,
    // frame 0
    0xff,0xd5,0xab,0xd5,0xff,0x00,0x1f,0x1f,0x18,0x18,0xff,0xff,0x00,0x03,0xff,0xff,
};

const uint8_t PROGMEM cursor_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0x7e,0xe7,0xe7,0x81,0x81,0xe7,0xe7,0x7e,
};

const uint8_t PROGMEM map_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 1
    0x00,0xfc,0xa2,0x42,0x82,0x42,0xc2,0x42,0x42,0x3c,0x00,0x3c,0x72,0x42,0x3c,0x80,0x00,0x31,0x6a,0xeb,0x8a,0x8a,0x73,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 2
    0x00,0xfc,0xa2,0x52,0xa2,0xc2,0xfc,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x31,0x5a,0x6b,0x59,0x68,0x70,0x86,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 3
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x7c,0x6a,0x52,0x6a,0x52,0x62,0x44,0x44,0x7c,0x01,0x7c,0x62,0x42,0x64,0x3d,
    // frame 4
    0x8e,0xb1,0xb1,0x29,0x3e,0x80,0xbf,0xa8,0x34,0x79,0x3e,0x00,0xff,0xd1,0x3e,0x80,0x03,0x79,0x54,0x2a,0x56,0x29,0x90,0xc8,0xd3,0x9c,0x00,0x3e,0x52,0x64,0x78,0x03,
    // frame 5
    0x00,0xee,0xaa,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xaa,0xee,0x00,0x00,0x77,0x55,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x55,0x77,0x00,
    // frame 6
    0x40,0x00,0x10,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,0x40,0x80,0x08,0x08,0x40,0x40,0x02,0x02,0x00,0x10,0x10,0x00,0x00,0x04,0x04,0x00,0x80,
    // frame 7
    0x0a,0xee,0xee,0x0e,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0e,0xee,0xee,0x0a,0x20,0xbf,0xbf,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe0,0xbf,0xbf,0x20,
    // frame 8
    0xff,0xff,0xff,0xff,0xfd,0xfb,0xfd,0xff,0xff,0xff,0x7f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xf7,0xeb,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xdf,0xff,
};

const uint8_t PROGMEM squareIcon_tiles[] = {
    // width, height,
    3, 8,
    // frame 0
    0x00,0x00,0x00,
    // frame 1
    0x07,0x05,0x07,
    // frame 2
    0x07,0x07,0x07,
};

const uint8_t PROGMEM worm_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0xb3,0xad,0x1e,0x32,0x06,0xb5,0xdb,0xbf,
};

#endif