#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;
int main()
{
    vector<int> v = {3, 1, 4, 6, 5};
    
    if(binary_search(v.begin(), v.end(), 4)){
            cout << "found" << endl;
    }else{
        cout << "not found" << endl;
    }
}
        
        
