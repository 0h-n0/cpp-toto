#include <iostream>
#include <string>
#include <array>
#include <random>
#include <chrono>

using namespace std;

int main(void){
    array<int, 1000> ar;

    random_device seed_gen;
    default_random_engine engine(seed_gen());
    uniform_int_distribution<> dist(0, 1000);
    
    for(auto i = 0; i< ar.size(); ++i)
        ar[i] = dist(engine);

    // Insertion sort
    for(auto j = 2; j < ar.size(); ++j){
        int key = ar[j];
        int i = j - 1;
        while(i > 0 && ar[i] > key){
            ar[i+1] = ar[i];
            --i;
        }
        ar[i+1] = key;
    }
    for(auto i = 0; i< ar.size(); ++i)
        cout << ar[i] << endl;
    return 0;
}

