#include <iostream>
//#include "Array.h"

class Array {
public:
    int m;
    void show();
    Array(int d);
};

Array::Array(int d){
    m = d;
}

void Array::show(){
    std::cout << m << std::endl;
}

int main(void){
    Array ary(1);
    Array a = Array(10);
    a.show();
    return 0;
}

