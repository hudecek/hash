#include "crc16.h"

crc16::crc16()
{
    crc16_hash = 0xFFFF;
}

void crc16::crc16_update(char c) {
    unsigned char x = crc16_hash >> 8 ^ c;
    x ^= x>>4;
    crc16_hash = (crc16_hash << 8) ^ ((unsigned short)(x << 12)) ^ ((unsigned short)(x <<5)) ^ ((unsigned short)x);
}

void crc16::crc16_print(bool hex) {
    if(hex) {
        std::cout << "0x" << std::hex << crc16_hash;
    } else {
        std::cout << std::dec << crc16_hash;
    }
}

