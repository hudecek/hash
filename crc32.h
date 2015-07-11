#ifndef CRC32_H
#define CRC32_H

#include <iostream>

class crc32
{
private:
    unsigned int crc32_hash;
public:
    crc32(): crc32_hash(0xFFFFFFFF) {}
    void crc32_update(char c);
    void crc32_print(bool hex);
};

#endif // CRC32_H
