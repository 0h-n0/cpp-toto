#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v = {1, 4, 3, 3, 1, 2, 2};

    auto it  = adjacent_find(v.begin(), v.end());

    if( it == v.end()){
        cout << "not found" <<endl;
    } else {
        cout << "found: index ==" << distance(v.begin(), it) << endl;
        cout << boolalpha <<  "*it == *(it+1):" << (*it == *(it+1)) << endl;
    }
}
        
