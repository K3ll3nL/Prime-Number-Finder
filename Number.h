//
// Created by Kellen Long on 8/10/2021.
//

#ifndef PRIMENUMBERFINDER_NUMBER_H
#define PRIMENUMBERFINDER_NUMBER_H


class Number {
private:
    bool mult;
    long long myNumber;
    long long checkNumber;
public:
    Number(int,int);
    void inc();
    bool check();
};


#endif //PRIMENUMBERFINDER_NUMBER_H
