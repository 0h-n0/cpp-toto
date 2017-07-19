#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main(void){
    vector<int> v = {};

    random_device seed_gen;
    mt19937 engine(seed_gen());
    uniform_int_distribution<> int_dist(0, 1000);
    
    for(auto i = 0; i < 100; ++i){
        v.push_back(int_dist(engine));
    }
    for(auto i = 0; i < 100; ++i){
        cout << v[i] << endl;
    }
    return 0;
}
