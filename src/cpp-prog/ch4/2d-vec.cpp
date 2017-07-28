#include <iostream>
#include <vector>

int main(void)
{
    std::vector<std::vector<int>> a(10);
    std::vector<int> row(10, 1);
    row.at(0) = 0;    
    for(int i = 0; i < a.size() ; i++){
        a.at(i) = row;
    }
    row.at(0) = 0;
    std::cout << row.at(0) << std::endl;

    try{
        row.at(10);
    }catch(std::out_of_range){
        std::cerr << "error\n";
    }
    for(int i = 0; i < a.size() ; i++){
        auto tmp = a.at(i);
        for(int j = 0; j < tmp.size() ; j++){
            std::cout << tmp.at(j) << " ";
        }
        std::cout << "\n";
    }


    
    
    return 0;
}

