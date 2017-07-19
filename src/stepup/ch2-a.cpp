#include <iostream>

using namespace std;

constexpr double square(const d){
    return d*d;
}

int main(void){
    auto b = true;
    auto ch = 'x';
    auto i = 123;
    auto d = 1.2;
    auto y = 2.0;
    //auto z = sqrt(y);
    const int dmv = 17;
    int var = 17;
    constexpr double max1 = 1.4*square(dmv);

    return 0;
}
