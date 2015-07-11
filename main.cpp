#include <iostream>
#include <info.h>
#include <hash_helper.h>
#include <string>
#include <fstream>
#include <xor_hash.h>
#include <crc16.h>
#include <crc32.h>
#include <md5.h>


using namespace std;




int main(int argc, char* argv[])
{
    info options(argc, argv);
    streambuf *cinbuf;
    ifstream file;
    xor_hash x;
    crc16 y;
    char c = -1;

    if(options.filename.compare("stdin") != 0) {
        file.open(options.filename);
        cinbuf = cin.rdbuf();
        cin.rdbuf(file.rdbuf());

    }



    if(options.filename.compare("stdin") != 0)
        cin.rdbuf(cinbuf);


    cin >> noskipws;

    while(cin >> c) {
        x.xor_update(c);
        y.crc16_update(c);
    }



    cout << "XOR: ";
    x.print_hash(false);
    cout << endl;

    cout << "c16: ";
    y.crc16_print(false);
    cout << endl;


    return 0;
}

