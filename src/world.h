#pragma once


const uint8_t RL1 = 64;
const uint8_t RL2 = 128;
const int8_t RL1_LENGTH = 5;
const int8_t RL2_LENGTH = 3;
const int16_t TILE_SIZE = 16;
const int16_t MAP_WIDTH_TILES = 47;
const int16_t MAP_HEIGHT_TILES = 23;
const int16_t MAP_WIDTH_PX = MAP_WIDTH_TILES * TILE_SIZE;
const int16_t MAP_HEIGHT_PX = MAP_HEIGHT_TILES * TILE_SIZE;
const int16_t WORLD_DATA_LENGTH = 643;

const uint8_t PROGMEM world_map[643] = {
    0x42, 0x82, 0x2, 0x5e, 0x1e, 0x1e, 0x22, 0x9e, 0x1e, 0x1e, 0x21, 0x28, 0x29, 0x2a, 0x22, 0x1e, 0x22, 0x5e, 0x1e, 0x22, 0x93, 0x13, 0x13, 0x54, 0x14, 0x13, 0x13, 0x13, 0x18, 0x44, 0x4, 0x4, 0x4, 0x0, 0x64, 0x24, 0x24, 0x24, 0x4, 0x4, 0x26, 0x3, 0x27, 0x24, 0x44, 0x4, 0x4, 0x4, 0x1b, 0x93, 0x13, 0x13, 0x54, 0x14, 0x15, 0x15, 0x15, 0x10, 0x44, 0x4, 0x40, 0x40, 0x0, 0x0, 0x4, 0x2, 0x2, 0x2, 0x0, 0x4, 0x0, 0x4, 0x0, 0x84, 0x4, 0x1b, 0x93, 0x13, 0x13, 0x54, 0x14, 0x20, 0x25, 0x44, 0x4, 0x4, 0x40, 0x40, 0x40, 0x0, 0x0, 0x0, 0x4, 0x80, 0x0, 0x4, 0x4, 0x4, 0x1b, 0x93, 0x13, 0x13, 0x54, 0x14, 0x1c, 0x0, 0x0, 0x0, 0x84, 0x4, 0x4, 0x40, 0x40, 0x40, 0x40, 0x0, 0x0, 0x0, 0x5, 0x4, 0x4, 0x1b, 0x53, 0x13, 0x94, 0x14, 0x14, 0x1c, 0x40, 0x40, 0x40, 0x40, 0x0, 0x0, 0x11, 0x16, 0x16, 0x12, 0x25, 0x80, 0x0, 0x5, 0x4, 0x4, 0x1b, 0x53, 0x13, 0x13, 0x94, 0x14, 0x1c, 0x40, 0x40, 0x40, 0x40, 0x0, 0x0, 0x17, 0x13, 0x13, 0x18, 0x25, 0x80, 0x0, 0x5, 0x4, 0x4, 0x1b, 0x53, 0x13, 0x13, 0x13, 0x14, 0x14, 0x14, 0x1c, 0x80, 0x0, 0x11, 0x56, 0x56, 0x16, 0x16, 0x12, 0x80, 0x0, 0x17, 0x13, 0x19, 0x10, 0x25, 0x0, 0x0, 0x0, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x53, 0x93, 0x13, 0x14, 0x14, 0x1c, 0x80, 0x0, 0x17, 0x53, 0x53, 0x13, 0x13, 0x18, 0x80, 0x0, 0xf, 0x15, 0x10, 0x25, 0x80, 0x0, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x53, 0x93, 0x13, 0x14, 0x14, 0x1c, 0x80, 0x0, 0x17, 0x53, 0x13, 0x13, 0x94, 0x14, 0x13, 0x18, 0x40, 0x40, 0x0, 0x0, 0x0, 0x5, 0x4, 0x4, 0x1b, 0x93, 0x13, 0x8, 0xc, 0x9, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x0, 0x2, 0x17, 0x13, 0x8, 0xc, 0xc, 0x9, 0x13, 0x13, 0x94, 0x14, 0x13, 0x18, 0x40, 0x40, 0x0, 0x0, 0x84, 0x4, 0x1b, 0x93, 0x13, 0xb, 0x0, 0xa, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x2, 0x2, 0xe, 0xe, 0xe, 0x0, 0x0, 0xa, 0x13, 0x13, 0x94, 0x14, 0x13, 0x18, 0x4, 0x40, 0x40, 0x0, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x93, 0x13, 0xb, 0x0, 0xa, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x0, 0x2, 0x17, 0x13, 0x6, 0xd, 0xd, 0x7, 0x53, 0x13, 0x13, 0x18, 0x4, 0x4, 0x40, 0x80, 0x0, 0x0, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x93, 0x13, 0xb, 0x0, 0xa, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x80, 0x0, 0x17, 0x53, 0x53, 0x13, 0x13, 0x18, 0x4, 0x4, 0x0, 0x0, 0x0, 0x24, 0x24, 0x80, 0x0, 0x0, 0x84, 0x4, 0xe, 0x13, 0x13, 0x13, 0xe, 0xe, 0x0, 0xa, 0x13, 0x13, 0x14, 0x14, 0x20, 0x80, 0x0, 0x17, 0x13, 0x14, 0x14, 0x14, 0x53, 0x13, 0x19, 0x15, 0x10, 0x4, 0x4, 0x4, 0x40, 0x80, 0x0, 0x0, 0x4, 0x4, 0x4, 0x1b, 0x93, 0x13, 0xb, 0x0, 0xa, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x80, 0x0, 0x17, 0x13, 0x14, 0x14, 0x14, 0x53, 0x13, 0x18, 0x84, 0x4, 0x40, 0x0, 0x0, 0x24, 0x0, 0x0, 0x25, 0x5, 0x4, 0x4, 0x1b, 0x93, 0x13, 0xb, 0x0, 0xa, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x4, 0x4, 0x17, 0x13, 0x14, 0x14, 0x14, 0x13, 0x19, 0x95, 0x15, 0x10, 0x4, 0x40, 0x40, 0x0, 0x0, 0x0, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x93, 0x13, 0xb, 0x25, 0xa, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x4, 0x4, 0x17, 0x13, 0x14, 0x14, 0x14, 0x13, 0x18, 0x44, 0x4, 0x40, 0x40, 0x0, 0x0, 0x24, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x93, 0x13, 0x6, 0xd, 0x7, 0x13, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x4, 0x4, 0x17, 0x93, 0x13, 0x13, 0x18, 0x4, 0x40, 0x40, 0x40, 0x0, 0x0, 0x0, 0x84, 0x4, 0x1b, 0x53, 0x93, 0x13, 0x14, 0x14, 0x1c, 0x0, 0x0, 0x0, 0x4, 0xf, 0x95, 0x15, 0x15, 0x10, 0x4, 0x40, 0x40, 0x40, 0x0, 0x24, 0x24, 0x84, 0x4, 0x1b, 0x53, 0x93, 0x13, 0x14, 0x14, 0x22, 0x40, 0x0, 0x0, 0x0, 0x84, 0x4, 0x40, 0x40, 0x40, 0x80, 0x0, 0x4, 0x4, 0x4, 0x1b, 0x53, 0x93, 0x13, 0x14, 0x14, 0x25, 0x40, 0x40, 0x40, 0x40, 0x0, 0x24, 0x40, 0x0, 0x0, 0x0, 0x24, 0x5, 0x4, 0x4, 0x1b, 0x53, 0x13, 0x13, 0x13, 0x14, 0x14, 0x14, 0x25, 0x25, 0x21, 0x5f, 0x5f, 0x1f, 0x21, 0x5f, 0x5f, 0x5f, 0x9f, 0x1f, 0x1f, 0x20, 0x93, 0x13, 0x13, 0x54, 0x14
};