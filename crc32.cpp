#include "crc32.h"

void crc32::crc32_update(char c) {
    (void) c;
}

void crc32::crc32_print(bool hex) {
    if(hex) {
        std::cout << std::hex << crc32_hash;
    } else {
        std::cout << std::dec << crc32_hash;
    }
}

