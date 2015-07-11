#ifndef XOR_HASH_H
#define XOR_HASH_H

#include <iostream>

class xor_hash
{
private:
    unsigned char hash;
public:
    xor_hash(): hash(0) {}
    void xor_update(char c);
    void print_hash(bool hex);
};

#endif // XOR_HASH_H
