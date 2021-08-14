//
// Created by Kellen Long on 8/10/2021.
//

#include "Number.h"

bool Number::check() {
    return mult;
}

void Number::inc() {
    checkNumber++;
    checkNumber = checkNumber % myNumber;
    mult = (checkNumber == 0);
}