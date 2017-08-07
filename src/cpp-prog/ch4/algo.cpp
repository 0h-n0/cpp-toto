#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unique_copy>

using namespace std;

struct ENTRY{
    string name;
    int number;
} typedef Entry;

bool operator<(const Entry& x, const Entry& y)
{
    return x.name<y.name;
}

list<Entry> f(vector<Entry>& vec){
    list<Entry> res;
    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), back_inserter(res));
    return res;
}


int main(void){
    Entry tmp, tmp2;
    vector<Entry> a;
    tmp.name = "kkkk";
    tmp.number = 0;
    tmp2.name = "hhhh";
    tmp2.number = 1;
    
    a.push_back(tmp);

    cout << a.size() << endl;

    tmp<tmp2;
    
    return 0;
}
