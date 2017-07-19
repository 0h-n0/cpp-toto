#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stdexcept>


class MyArray{
 public:
    static int m;
    MyArray();
    virtual ~MyArray();
};

MyArray::MyArray(){
    std::cout << "myArray" << std::endl;
}
    
#endif
