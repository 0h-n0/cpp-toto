#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void Open(ifstream& file, const char* filename){
    file.open(filename);
    if(! file.is_open()){
        throw "can't open a file.";
    }
}

void GetLine(ifstream& file, string &line){
    getline(file, line);
    if(file.fail()){
        throw "can't read a file.";
    }
}

int main(){
    try{
        ifstream file;
        Open(file, "test.txt");

        string line;
        GetLine(file, line);
        cout << line << endl;
    }catch(const char* error){
        cerr << error << endl;
        return EXIT_FAILURE;
    }
}
        
