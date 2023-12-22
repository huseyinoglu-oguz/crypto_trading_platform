#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType{bid,ask};

class OrderBookEntry{
    public:

    OrderBookEntry( double _price,
                    double _amount,
                    std::string _tiemstamp,
                    std::string _product,
                    OrderBookType _orderType)
    
    : price(_price),
      amount(_amount),
      timestamp(_tiemstamp),
      product(_product),
      orderType(_orderType)

    {

    }

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;

};

int main()
{
    std::vector<OrderBookEntry> entries;

    entries.push_back(
      {10000,0.02,"202/03/17","BCD/USFT",OrderBookType::bid}
    );
    entries.push_back(
      {20000,0.03,"202/03/17","BCD/USFT",OrderBookType::ask}
    );


    for(OrderBookEntry& e : entries)
    {
      std::cout << e.price << std::endl;
    }



    return 0;
}