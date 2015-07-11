#include "info.h"

info::info(int argc, char* argv[])
{
    bool file = false;

    xorHash = c16 = c32 = md5 = hex = error = false;

    for(int i=1; i<argc; i++) {
        if(std::string(argv[i]).compare("-xor") == 0) {
            xorHash = true;
        }

        else if(std::string(argv[i]).compare("-c16") == 0) {
            c16 = true;
        }

        else if(std::string(argv[i]).compare("-c32") == 0) {
            c32 = true;
        }

        else if(std::string(argv[i]).compare("-md5") == 0) {
            md5 = true;
        }

        else if(std::string(argv[i]).compare("-f") == 0) {
            if(i < argc - 1) {
                if(argv[i+1][0] != '-') {
                    filename = std::string(argv[i+1]);
                    file = true;
                } else throw 2;
            } else throw 3;
        } else {
            throw 1;
        }
    }

    if(!file) {
        filename = "stdin";
    }

}

