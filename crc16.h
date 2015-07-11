#ifndef CRC16_H
#define CRC16_H

#include <iostream>

class crc16
{
private:
    unsigned short crc16_hash;
public:
    crc16() : crc16_hash(0xFFFF){}
    void crc16_update(char c);
    void crc16_print(bool hex);
};

#endif // CRC16_H
