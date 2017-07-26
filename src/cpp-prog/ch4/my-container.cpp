#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

struct Entry {
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\"," <<  e.number << "}";
}

void print_book(const vector<Entry>& book)
{
    for(int i =0; i!=book.size(); ++i)
        cout << book[i] << '\n';
    for(const auto& b: book)
        cout << b << '\n';
    
}

int main(void){
    vector<Entry> phone_book = {
        {"David Hume", 123456},
        {"Karl Popper", 234567},
        {"Vertrand Arthur William Russell", 345678}
    };
    vector<int> v1 = {1, 2, 3, 4};
    vector<string> v2;
    vector<double> v4(32,9.9);
    for(auto &i : v4)
        cout << i << endl;
    cout << v4.size() << endl;
    v4.push_back(10000);
    v4.push_back(10000);
    v4.push_back(10000);
    cout << v4.size() << endl;
    cout << v4
    print_book(phone_book);
    return 0;
}

    

