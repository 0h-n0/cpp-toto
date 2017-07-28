#include <iostream>
#include <string>
#include <ostream_iterator>

using namespace std;

int main(void)
{
    // << "put to" operator.
    // >> "get from" operator
    string str;
    //cin >> str;
    getline(cin, str);
    cout << str << endl;    
    
}
