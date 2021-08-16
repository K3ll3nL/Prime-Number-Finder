#include <iostream>
#include <vector>
#include "Number.h"


int main(int argc, char** argv) {
    std::vector<Number> list;
    std::vector<Number>::iterator iter;
    for(long long i = 2; i < atoi(argv[1]); i++){
        bool mult = false;
        iter = list.begin();
        while(!mult&&iter!=list.end()){
            iter->inc();
            if(iter->check()){
                mult = true;
            }
            iter++;
        }
        while(iter!=list.end()){
            iter->inc();
            iter++;
        }
        if(!mult){
           list.push_back(*(new Number(i,i)));
        }
    }
    for(auto i: list){
        std::cout<<i<<std::endl;
    }
}
