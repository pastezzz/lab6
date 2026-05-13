#include "randfuncs.h"
#include <cstdlib>

int flipCoin() {
    return rand() % 2;
}

int rollSixSidedDie() {
    return rand() % 6 + 1;
}

int rollTwentySidedDie() {
    return rand() % 20 + 1;
}