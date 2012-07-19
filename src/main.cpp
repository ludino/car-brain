#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include "Cell.h"

class Fisk {
public:
    Fisk(int f) {
        std::cout << "Kontruktøren kjører" << f << "\n";
        std::stringstream ss;
        ss << "Noe: " << f << std::endl;
        ola = ss.str();
    }
    std::string ola;
};

int main(int argc, const char * argv[]) {
    
    char *fi = new char[sizeof(Fisk) * 10];
    Fisk *f = (Fisk *)fi;
    for (int i=0; i<10; i++) {
        new (fi+sizeof(Fisk)*i) Fisk(i);
    }
    
    std::cout << f[7].ola;
    
    
    Cell myCell;
    myCell.giveSignal(32);
    std::cout << "Hello brain\n";
    return 0;
}