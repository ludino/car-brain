#include <iostream>
#include "Cell.h"

int main(int argc, const char * argv[]) {
    Cell myCell;
    myCell.giveSignal(32);
    std::cout << "Hello brain\n";
    return 0;
}