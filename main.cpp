#include <iostream>
#include "Lists/SkipList.h"
#include "Number.h"


int main() {
    SkipList<Number> list(4,0.5);
    for(long long i = 0; i < 10000000; i++){
        if(list.find(i)){

        }
    }
}
