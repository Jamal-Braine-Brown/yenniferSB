#include "bitboard.h"

std::string Bitboards::display(Bitboard b) {
    std::string s;

    for (Rank rw = RANK_8; rw >= RANK_1; --rw) {
        for (File fe = FILE_A; fe <= FILE_H; ++fe) {
            unsigned int square = rw * 8 + fe;

            s += (fe == FILE_H) ? std::to_string(square) : std::to_string(square) + " ";
        }
        s += "\n";
    }

    return s;
}