#ifndef MD5_H
#define MD5_H

#include <iostream>

class md5
{
private:
    int md5_hash;
public:
    md5(): md5_hash(0) {}
    void md5_update(char c);
    void md5_print(bool hex);
};

#endif // MD5_H
