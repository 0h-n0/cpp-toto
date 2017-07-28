#include <list>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void){
    std::list<std::map<std::string, int> > d2map;
    std::list<int> easymap;
    int org_data[] = {4, 6, 5};
    list<int> lst(org_data, std::end(org_data));
    easymap.push_front(1);
    easymap.push_back(20);    
    for(std::list<int>::iterator i = easymap.begin() ; i != lst.end(); ++i){
        cout << *i << endl;
    }

    cout << d2map.size() << endl;
    

    return 0;
}
