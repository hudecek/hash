#include "md5.h"


void md5::md5_update(char c) {
    (void) c;
}

void md5::md5_print(bool hex) {
    if(hex)
        std::cout << "0x" << std::hex << md5_hash;
    else
        std::cout << std::dec << md5_hash;
}

