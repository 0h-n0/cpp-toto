#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <chrono>

int main(void)
{
    std::chrono::system_clock::time_point s = std::chrono::system_clock::now();
    std::map<std::string, int> m;
    m.insert(std::make_pair("kokekokko", 20));
    int i = m.at("kokekkoko");
    std::cout << i << std::endl;
    std::chrono::system_clock::time_point e = std::chrono::system_clock::now();
    std::chrono::duration<double> diff = e-s;
    std::cout << diff << std::endl;
    
    return 0;
}

