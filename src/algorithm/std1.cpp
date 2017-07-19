#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {3 ,1 ,4};

    cout << boolalpha;

    bool result1 = all_of(v.begin(), v.end(), [](int x){return x < 5;});
    cout << result1 << endl;
    
    return 0;
}


