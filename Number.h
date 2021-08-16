//
// Created by Kellen Long on 8/10/2021.
//

#ifndef PRIMENUMBERFINDER_NUMBER_H
#define PRIMENUMBERFINDER_NUMBER_H


#include <iostream>

class Number {
private:
    bool mult;
    long long myNumber;
    long long checkNumber;
public:
    Number();
    Number(long long,long long);
    void inc();
    bool check();
    bool operator<(Number&);
    bool operator!=(Number&);
    friend std::ostream& operator<<(std::ostream& os, const Number&);
};

std::ostream& operator<<(std::ostream& os, const Number& that);



#endif //PRIMENUMBERFINDER_NUMBER_H
