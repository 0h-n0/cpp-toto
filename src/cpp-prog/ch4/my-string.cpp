#include <iostream>
#include <string>
#include <list>

using namespace std;

std::string compose(const std::string& name, const std::string& domain)
{
    return name + '@' + domain;
}

struct Entry {
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\"," <<  e.number << "}";
}

int main(void){
    std::string a {"hello world!!!"};
    std::list<std::string> slist {"hello neighbor.", "hello bro."};
    std::cout << a << std::endl;

    std::cout << slist.front() << std::endl;
    std::cout << *(++slist.begin()) << std::endl;
    std::cout << slist.size() << std::endl;
    std::cout << *(slist.begin()) << std::endl;
    auto add = compose("hello", "world.com");
    a += add;
    std::cout << a << std::endl;    
    std::cout << add << std::endl;
    auto ss = a.substr(4, a.size());
    std::cout << ss.replace(0, 5, "replace") << std::endl;
    std::cout << ss << std::endl;
    ss[0] = std::toupper(ss[0]);
    std::cout << ss << std::endl;    
    for(auto itr = slist.begin(); itr != slist.end(); ++itr) {
        std::cout << *itr << "\n";
    }
    return EXIT_SUCCESS;
}
