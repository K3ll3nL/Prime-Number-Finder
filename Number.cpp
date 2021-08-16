//
// Created by Kellen Long on 8/10/2021.
//

#include "Number.h"

Number::Number(){
    mult = false;
    myNumber = -1;
    checkNumber = -1;
}
Number::Number(long long my, long long check) {
    mult = true;
    myNumber = my;
    checkNumber = check;
}

bool Number::check() {
    return mult;
}

void Number::inc() {
    checkNumber++;
    checkNumber = checkNumber % myNumber;
    mult = (checkNumber == 0);
}

bool Number::operator<(Number & that) {
    return this->myNumber<that.myNumber;
}
bool Number::operator!=(Number& that){
    return !(this->myNumber==that.myNumber && this->checkNumber == that.checkNumber);
}

std::ostream &operator<<(std::ostream &os, const Number &that) {
    os << that.myNumber;
    return os;
}
