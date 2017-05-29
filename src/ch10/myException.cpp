#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

class myException{
    ~myException();
};

class myFileException : public myException{

};

void throwStrError(void){
    std::string errorMsg = "Error in throwStrError.";
    throw errorMsg;
}

int main(void){
    try{
        throwStrError();

    }catch(const std::string* errorMsg){
        std::cerr <<  errorMsg << std::endl;
        return EXIT_FAILURE;
    }
    return 0;
}


