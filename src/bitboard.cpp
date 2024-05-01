#include "bitboard.h"

std::string Bitboards::display(Bitboard b) {
    std::string s = "\n";

    for (Rank rw = RANK_8; rw >= RANK_1; --rw) {
        for (File fe = FILE_A; fe <= FILE_H; ++fe) {
            unsigned int square = rw * 8 + fe;

            s += (!fe) ? std::to_string((int)rw + 1) : "";
            s += (b & (1ULL << square)) ? " 1" : " 0";
        }
        s += "\n";  
    }
    s += "  a b c d e f g h\n";

    return s;
}