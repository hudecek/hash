#ifndef INFO_H
#define INFO_H

#include <string>

class info
{
public:
    info(int argc, char* argv[]);
    bool xorHash;
    bool c16;
    bool c32;
    bool md5;
    bool hex;
    bool error;
    std::string filename;
};

#endif // INFO_H
