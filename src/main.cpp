#include "bitboard.h"

#include <iostream>

int main () {
    Bitboard b = 0ULL;
    std::string s = Bitboards::display(b);
    std::cout << s << std::endl;
    return 0;
}   