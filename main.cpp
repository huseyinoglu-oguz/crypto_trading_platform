#include <iostream>
#include <string>
#include <vector>

int main()
{
    enum class OrderBookType{bid,ask};

    std::vector<double> prices;
    std::vector<double> amount;
    std::vector<std::string> timestamps;
    std::vector<std::string> products;
    std::vector<OrderBookType> orderTypes;

    prices.push_back(5000.01);

    unsigned short i = 65536;
    std::cout<< i<<std::endl;
    


    return 0;
}