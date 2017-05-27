#include <iostream>
using namespace std;

void Error(){
    try{
        throw "str";
    } catch(int error){
        throw "Error";
    } catch(const char* error){
        cerr << "here." << endl;
    }
}

int main(){
    try{
        Error();
    }catch(const char* error){
        cerr << "or here?" << error << endl;
    }
}
    
