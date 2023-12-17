#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType{bid,ask};

class OrderBookEntry{
    public:

    OrderBookEntry( double _price,
                    double _aount,
                    std::string _tiemstamp,
                    std::string _product,
                    OrderBookType _orderType)
    {
        price = _price;
        tiemstamp = _tiemstamp;
        product = _product;

    }

    double price;
    double aount;
    std::string tiemstamp;
    std::string product;
    OrderBookType orderType;

};

int main()
{
    
    OrderBookEntry order1{10000,0.02,"202/03/17","BCD/USFT",OrderBookType::bid};

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