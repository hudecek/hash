#include "xor_hash.h"

xor_hash::xor_hash()
{
    hash = 0;
}

void xor_hash::xor_update(char c) {
    hash ^= c;
}

void xor_hash::print_hash(bool hex) {
    if(hex) {
        std::cout << "0x" << std::hex <<(int) hash;
    } else {
        std::cout << std::dec <<(int) hash;
    }
}
