#include <iostream>
#include <algorithm>

bool has_c(const std::string& s, char c)
{
    auto p = std::find(s.begin(), s.end(), c);
    if(p == s.end())
        return true;
    else
        return false;
}

int main(void)
{
    std::string str = "kkk bbb ccc";
    std::cout << has_c(str, 'c') << std::endl;
    return 0;
}
