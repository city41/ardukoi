#ifndef maskBitmaps_h
#define maskBitmaps_h

const uint8_t PROGMEM BASS_plus_mask[] = {
    // width, height,
    12, 8,
    // frame 0 
    0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x04,0x26,0x3e,0x3e,0x3e,0x7e,0x7e,0x3e,0x1c,0x1c,0x3e,0x7f,
};

const uint8_t PROGMEM BETA_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x78,0xfe,0xff,0xfc,0x7e,0xff,0xd5,
};

const uint8_t PROGMEM BLUEGILL_plus_mask[] = {
    // width, height,
    12, 8,
    // frame 0 
    0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x3c,0x7e,0xfe,0x7f,0x7f,0xfe,0xfe,0x3c,0x18,0x38,0x7c,
};

const uint8_t PROGMEM CATFISH_plus_mask[] = {
    // width, height,
    12, 8,
    // frame 0 
    0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x38,0x5c,0x9c,0x1c,0x3e,0x1f,0x3c,0x3c,0x08,0x08,0x1c,0x14,
};

const uint8_t PROGMEM CRAB_plus_mask[] = {
    // width, height,
    12, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x0e,0x18,0xbf,0xe0,0x70,0x7c,0xf0,0x7c,0xa0,0x3f,0x18,0x0e,
};

const uint8_t PROGMEM CRAWFISH_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
    // mask 0 
    0x18,0x3c,0x6c,0x2c,0x0c,0x17,0x28,0x28,
};

const uint8_t PROGMEM EEL_plus_mask[] = {
    // width, height,
    16, 8,
    // frame 0 
    0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x08,0x2c,0x3c,0x1c,0x1c,0x38,0x38,0x38,0x38,0x38,0x38,0x1c,0x1c,0x1c,0x1c,0x08,
};

const uint8_t PROGMEM FANGTOOTH_plus_mask[] = {
    // width, height,
    12, 8,
    // frame 0 
    0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0xdc,0x8e,0xdf,0xbf,0xff,0xff,0xfe,0x7c,0x78,0x70,0x60,0xf0,
};

const uint8_t PROGMEM FLOUNDER_plus_mask[] = {
    // width, height,
    12, 8,
    // frame 0 
    0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x18,0x3c,0x7e,0xff,0xff,0xff,0xff,0x7e,0x3c,0x18,0x18,0x3c,
};

const uint8_t PROGMEM GOLDFISH_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x30,0x38,0x78,0x38,0x38,0x10,0x38,
};

const uint8_t PROGMEM GROUPER_plus_mask[] = {
    // width, height,
    16, 8,
    // frame 0 
    0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x58,0x5c,0x7e,0xfe,0xff,0x7e,0x7f,0xfe,0xff,0x3c,0x18,0x18,0x18,0x3c,0x7e,
};

const uint8_t PROGMEM GRTWHITE_plus_mask[] = {
    // width, height,
    30, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x30,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x30,0x38,0x38,0x7c,0x7c,0x7c,0x7e,0x7e,0x7e,0xfe,0xfe,0xfe,0x7f,0x7f,0x7f,0x7e,0x7e,0x7e,0x7e,0x7e,0x3c,0x3c,0x38,0x38,0x38,0x38,0x3c,0x7e,0xfb,
};

const uint8_t PROGMEM GUPPY_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x30,0x38,0x38,0x10,0x38,0x38,0x7c,0x6c,
};

const uint8_t PROGMEM LOBSTER_plus_mask[] = {
    // width, height,
    11, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x3c,0x18,0x3c,0x18,0x18,0x3c,0x3c,0x5a,0xc3,0xe7,0xa5,
};

const uint8_t PROGMEM MARLIN_plus_mask[] = {
    // width, height,
    20, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x78,0x78,0x78,0x7f,0x7e,0x7c,0x78,0x70,0x30,0x30,0x30,0x7c,0xee,
};

const uint8_t PROGMEM MINNOW_plus_mask[] = {
    // width, height,
    4, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,
    // mask 0 
    0x08,0x1c,0x08,0x1c,
};

const uint8_t PROGMEM OCTOPUS_plus_mask[] = {
    // width, height,
    14, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x70,0xc6,0xb8,0xa0,0xee,0x7f,0x7f,0x7f,0xae,0xa0,0xa0,0xbc,0x47,0x38,
};

const uint8_t PROGMEM OLDBOOT_plus_mask[] = {
    // width, height,
    6, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0xc0,0xe0,0xe6,0xfe,0x7e,0xfe,
};

const uint8_t PROGMEM SARDINE_plus_mask[] = {
    // width, height,
    5, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x08,0x1c,0x1c,0x08,0x14,
};

const uint8_t PROGMEM SEAHORSE_plus_mask[] = {
    // width, height,
    4, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,
    // mask 0 
    0x02,0x32,0xbf,0xf6,
};

const uint8_t PROGMEM SHARK_plus_mask[] = {
    // width, height,
    24, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x08,0x00,0x20,0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x10,0x18,0x58,0x5c,0x7c,0x7c,0x7c,0xfc,0xfc,0x7e,0x7f,0x7f,0x7c,0x7c,0x78,0x78,0x70,0x70,0x60,0x60,0x60,0x70,0x78,0xfc,
};

const uint8_t PROGMEM TROUT_plus_mask[] = {
    // width, height,
    10, 8,
    // frame 0 
    0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x08,0x1c,0x1c,0x3c,0x3f,0x1e,0x1c,0x3c,0x08,0x1c,
};

const uint8_t PROGMEM arrow_plus_mask[] = {
    // width, height,
    5, 8,
    // frame 0 
    0x02,0x06,0x0e,0x06,0x02,
    // mask 0 
    0x02,0x06,0x0e,0x06,0x02,
    // frame 1 
    0x08,0x0c,0x0e,0x0c,0x08,
    // mask 1 
    0x08,0x0c,0x0e,0x0c,0x08,
};

const uint8_t PROGMEM boatOar_plus_mask[] = {
    // width, height,
    14, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x1c,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1c,0x1c,0x1c,0x1c,0x1c,0x08,
};

const uint8_t PROGMEM boat_plus_mask[] = {
    // width, height,
    24, 24,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0xa8,0x54,0x08,0x04,0x80,0xc4,0xc4,0xc4,0xc4,0xc4,0x44,0x4c,0x4c,0x98,0xf8,0xf0,0x60,0x00,0x00,0x00,0x00,0x34,0x32,0x35,0x32,0x34,0x34,0x34,0x35,0x35,0x35,0x35,0x36,0x36,0x3b,0x1b,0x0d,0x0d,0x05,0x06,0x00,0x00,0x00,
    // mask 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xe0,0xf8,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xfc,0xf8,0xf0,0x60,0x00,0x00,0x7e,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x1f,0x1f,0x0f,0x0f,0x07,0x00,0x00,
    // frame 1 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x50,0xa8,0x10,0x08,0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x98,0x98,0x30,0xf0,0xe0,0xc0,0x00,0x00,0x00,0x00,0x28,0x25,0x2a,0x25,0x28,0x28,0x28,0x2b,0x2b,0x2b,0x2b,0x2d,0x2d,0x36,0x16,0x0a,0x0b,0x0b,0x05,0x00,0x00,0x00,
    // mask 1 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xf0,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xf8,0xf8,0xf0,0xe0,0xc0,0x00,0x20,0x7c,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x1f,0x1f,0x1f,0x0f,0x07,0x04,0x00,
    // frame 2 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xa8,0x94,0x88,0x83,0x85,0x0d,0x8e,0x8f,0x0c,0x0f,0x02,0x0c,0x0c,0x98,0xf8,0xf0,0x60,0x00,0x00,0x00,0x01,0x35,0x31,0x35,0x31,0x35,0x34,0x34,0x34,0x34,0x34,0x34,0x36,0x36,0x3b,0x1b,0x0d,0x0d,0x05,0x06,0x00,0x00,0x00,
    // mask 2 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xf8,0xf8,0xf8,0xf8,0xf8,0xf8,0xf0,0xf0,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0xc0,0xe0,0xf8,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfc,0xfc,0xf8,0xf0,0x60,0x00,0x01,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x1f,0x1f,0x0f,0x0f,0x07,0x00,0x00,
    // frame 3 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x50,0xa8,0x10,0x06,0x0a,0x1a,0x1c,0x1e,0x18,0x1e,0x84,0x98,0x18,0x30,0xf0,0xe0,0xc0,0x00,0x00,0x00,0x00,0x28,0x25,0x2a,0x25,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x2c,0x20,0x0e,0x70,0x6a,0x6b,0x0b,0x05,0x00,0x00,0x00,
    // mask 3 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xe0,0xe0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xf0,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xf9,0xf8,0xf0,0xe0,0xc0,0x00,0x20,0x7c,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0x0f,0x07,0x04,0x00,
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
    0x16,0x3f,0x1a,0x1a,
    // mask 0 
    0x16,0x3f,0x1a,0x1a,
};

const uint8_t PROGMEM fishingGirl_plus_mask[] = {
    // width, height,
    16, 16,
    // frame 0 
    0x00,0xf8,0x24,0x42,0xe1,0x81,0xe1,0xe1,0xc1,0x01,0x01,0x01,0x02,0x04,0xf8,0x00,0x00,0x08,0x15,0x2a,0x68,0xc1,0x19,0x1d,0x1e,0x1e,0x1e,0x9c,0xe0,0x10,0x0f,0x00,
    // mask 0 
    0x00,0xf8,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0x00,0x00,0x08,0x1d,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x0f,0x00,
};

const uint8_t PROGMEM fishingPole_plus_mask[] = {
    // width, height,
    14, 16,
    // frame 0 
    0x00,0x00,0x00,0x00,0x80,0x40,0x20,0x90,0x48,0x24,0x12,0x09,0x05,0x02,0x48,0x24,0x12,0x09,0x04,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x00,0x00,0x00,0x00,0x80,0xc0,0xe0,0xf0,0x78,0x3c,0x1e,0x0f,0x07,0x02,0x78,0x3c,0x1e,0x0f,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // frame 1 
    0x00,0xc0,0x20,0x90,0x48,0x24,0x14,0x14,0x14,0x14,0x24,0x48,0x90,0xa0,0x47,0x38,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 1 
    0x00,0xc0,0xe0,0xf0,0x78,0x3c,0x1c,0x1c,0x1c,0x1c,0x3c,0x78,0xf0,0xe0,0x7f,0x3f,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // frame 2 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x78,0x86,0x79,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x00,
    // mask 2 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xf8,0xfe,0x7f,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0x00,
};

const uint8_t PROGMEM grub_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x60,0x58,0x34,0x2c,0x1a,0x06,0x00,
    // mask 0 
    0x60,0xf8,0xfc,0x7e,0x7e,0x3f,0x1f,0x06,
};

const uint8_t PROGMEM meat_plus_mask[] = {
    // width, height,
    10, 8,
    // frame 0 
    0x00,0x00,0x18,0x34,0x32,0x3e,0x1a,0x06,0x00,0x00,
    // mask 0 
    0x00,0x78,0xfc,0xfe,0xff,0xff,0xff,0x7f,0x1e,0x00,
};

const uint8_t PROGMEM player_plus_mask[] = {
    // width, height,
    16, 16,
    // frame 0 
    0x60,0x50,0xd0,0x4c,0x82,0xda,0x19,0xc1,0x81,0x41,0x41,0xc1,0x02,0xfc,0x00,0x00,0x00,0x00,0x00,0x03,0x7c,0x03,0x23,0xa3,0x83,0x03,0x01,0x7e,0x01,0x00,0x00,0x00,
    // mask 0 
    0x60,0x70,0xf0,0xfc,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x00,0x00,0x00,0x00,0x00,0x03,0x7f,0x7f,0xff,0xff,0xff,0xff,0x7f,0x7f,0x01,0x00,0x00,0x00,
    // frame 1 
    0xc0,0xa0,0xa0,0x98,0x04,0xb4,0x32,0x82,0x02,0x82,0x82,0x82,0x04,0xf8,0x00,0x00,0x00,0x00,0x01,0x06,0x79,0x87,0x86,0x07,0x27,0x26,0x82,0x7d,0x02,0x01,0x00,0x00,
    // mask 1 
    0xc0,0xe0,0xe0,0xf8,0xfc,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0x00,0x00,0x00,0x00,0x01,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x01,0x00,0x00,
    // frame 2 
    0x00,0x40,0xb0,0x08,0x84,0x02,0x42,0x62,0x62,0x42,0x02,0x84,0x08,0xb0,0x40,0x00,0x00,0x00,0x01,0x02,0x7d,0x03,0x83,0x83,0x03,0x03,0x03,0x7d,0x02,0x01,0x00,0x00,
    // mask 2 
    0x00,0x40,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x40,0x00,0x00,0x00,0x01,0x03,0x7f,0xff,0xff,0xff,0xff,0xff,0x7f,0x7f,0x03,0x01,0x00,0x00,
    // frame 3 
    0x00,0x40,0xb0,0x08,0x84,0x02,0x32,0x32,0x32,0x32,0x02,0x84,0x08,0xb0,0x40,0x00,0x00,0x00,0x01,0x1e,0x60,0x97,0x04,0x07,0x87,0x84,0x07,0xf8,0x06,0x01,0x00,0x00,
    // mask 3 
    0x00,0x40,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x40,0x00,0x00,0x00,0x01,0x1f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x01,0x00,0x00,
    // frame 4 
    0x00,0x60,0x50,0xd0,0x4c,0x82,0xda,0x19,0xc1,0x81,0x41,0x41,0xc1,0x02,0xfc,0x00,0x00,0x00,0x00,0x00,0x73,0x0c,0x03,0x83,0x83,0x03,0x03,0x71,0x14,0x05,0x0a,0x04,
    // mask 4 
    0x00,0x60,0x70,0xf0,0xfc,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x00,0x00,0x00,0x00,0x00,0x73,0x7f,0xff,0xff,0xff,0xff,0x7f,0x7f,0x1f,0x0f,0x0e,0x04,
    // frame 5 
    0x60,0x50,0xd0,0x4c,0x82,0xda,0x19,0xc1,0x81,0x41,0x41,0xc1,0x02,0xfc,0x00,0x00,0x00,0x00,0x10,0x2b,0x54,0x13,0x03,0x83,0x83,0x03,0x01,0x7e,0x01,0x00,0x00,0x00,
    // mask 5 
    0x60,0x70,0xf0,0xfc,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x00,0x00,0x00,0x00,0x10,0x3b,0x7f,0x7f,0xff,0xff,0xff,0xff,0x7f,0x7f,0x01,0x00,0x00,0x00,
    // frame 6 
    0x00,0x40,0xb0,0x08,0x84,0x02,0x42,0x62,0x62,0x42,0x02,0x84,0x08,0xb0,0x40,0x00,0x00,0x00,0x01,0x02,0x7d,0x03,0x83,0x83,0x03,0x03,0x03,0x69,0x16,0x09,0x00,0x00,
    // mask 6 
    0x00,0x40,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x40,0x00,0x00,0x00,0x01,0x03,0x7f,0xff,0xff,0xff,0xff,0xff,0x7f,0x7f,0x1f,0x09,0x00,0x00,
    // frame 7 
    0x00,0x60,0x50,0xd0,0x4c,0x82,0xda,0x19,0xc1,0x81,0x41,0x41,0xc1,0x02,0xfc,0x00,0x00,0x00,0x00,0x08,0x77,0x08,0x0b,0x83,0x83,0x03,0x03,0x71,0x0c,0x03,0x00,0x00,
    // mask 7 
    0x00,0x60,0x70,0xf0,0xfc,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x00,0x00,0x00,0x00,0x08,0x7f,0x7f,0xff,0xff,0xff,0xff,0x7f,0x7f,0x0f,0x03,0x00,0x00,
    // frame 8 
    0x40,0xb0,0x08,0x04,0x02,0x32,0x32,0x32,0x32,0x02,0x04,0x08,0xb0,0x40,0x00,0x00,0x00,0x01,0x06,0x78,0x87,0x04,0x07,0x07,0x04,0x87,0x78,0x06,0x01,0x00,0x00,0x00,
    // mask 8 
    0x40,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x40,0x00,0x00,0x00,0x01,0x07,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x07,0x01,0x00,0x00,0x00,
    // frame 9 
    0x40,0xb0,0x08,0x04,0x02,0x32,0x32,0x32,0x32,0x02,0x04,0x08,0xb0,0x40,0x00,0x00,0x00,0x01,0x06,0x78,0x87,0x04,0x07,0x07,0x04,0x87,0x08,0x06,0x01,0x3c,0x30,0x00,
    // mask 9 
    0x40,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x40,0x00,0x00,0x00,0x01,0x07,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x37,0x3d,0x7e,0x7c,0x38,
    // frame 10 
    0x40,0xb0,0x08,0x04,0x02,0x32,0x32,0x32,0x32,0x02,0x04,0x08,0xb0,0x40,0x00,0x00,0x00,0x01,0x06,0x78,0x87,0x0c,0x03,0x03,0x0c,0x87,0x78,0x06,0x01,0x00,0x00,0x00,
    // mask 10 
    0x40,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x40,0x00,0x00,0x00,0x01,0x07,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x07,0x01,0x00,0x00,0x00,
};

const uint8_t PROGMEM pm_plus_mask[] = {
    // width, height,
    3, 8,
    // frame 0 
    0x0f,0x05,0x07,
    // mask 0 
    0x0f,0x05,0x07,
};

const uint8_t PROGMEM proPole_plus_mask[] = {
    // width, height,
    16, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x0c,0x0c,0x0c,0x0c,0x7c,0x7c,0x74,0x24,0x64,0x04,0x06,0x04,0x04,0x04,0x06,0x00,
};

const uint8_t PROGMEM shrimp_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x0a,0x2e,0x30,0x40,0x60,0x00,0x00,
    // mask 0 
    0x1e,0x3f,0x7f,0x7f,0xf0,0xf9,0x7e,0x39,
};

const uint8_t PROGMEM wormIcon_plus_mask[] = {
    // width, height,
    7, 8,
    // frame 0 
    0x00,0x40,0x46,0x6a,0x3a,0x12,0x00,
    // mask 0 
    0x40,0xe6,0xef,0xff,0x7f,0x3f,0x12,
};

const uint8_t PROGMEM worm_plus_mask[] = {
    // width, height,
    7, 8,
    // frame 0 
    0x00,0x00,0x0c,0x32,0x02,0x00,0x00,
    // mask 0 
    0x00,0x6c,0xfe,0xff,0xf7,0x62,0x00,
    // frame 1 
    0x00,0x00,0x00,0x30,0x00,0x00,0x00,
    // mask 1 
    0x00,0x60,0xf0,0xf8,0xf0,0x60,0x00,
};

#endif