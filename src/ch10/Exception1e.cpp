#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    try{
        std::ifstream file;

        file.open("test.txt");
        if(! file.is_open()){
            throw "no file.";
        }
        string line;

        getline(file, line);
        if(file.fail()){
            throw "can't read.";
        }

        cout << line << endl;
    }catch(const char* error){
        cerr << error << endl;
        return EXIT_FAILURE;
    }
}
