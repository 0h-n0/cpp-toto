#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(void){
    // pred stands for predicate which is basically a callable entity which is either a funcion

    vector<int> v = {3, 1, 4};
    
    cout << boolalpha;

    
    bool result1 = any_of(v.begin(), v.end(), [](int x){ return x >= 5;});
    cout << result1 << endl;

    bool result2 = any_of(v.begin(), v.end(), [](int x){ return x == 1;});
    cout << result2 << endl;


    
    return 0;
}
