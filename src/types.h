#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>

using Bitboard = uint64_t;

enum File : int {
    FILE_A,
    FILE_B,
    FILE_C,
    FILE_D,
    FILE_E,
    FILE_F,
    FILE_G,
    FILE_H,
    FILE_EMPTY
};

enum Rank : int {
    RANK_1,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_EMPTY
};

#define ENUMERATOR_OPERATOR_OVERLOAD(e) \
    inline e& operator++(e& o) {return o = e(int(o) + 1);} \
    inline e& operator--(e& o) {return o = e(int(o) - 1);}

ENUMERATOR_OPERATOR_OVERLOAD(File)
ENUMERATOR_OPERATOR_OVERLOAD(Rank)

#undef ENUMERATOR_OPERATOR_OVERLOAD

#endif