#pragma once

#include <string>

enum class OrderBookType{bid,ask,unknown};

class OrderBookEntry{
    public:

    OrderBookEntry( double _price,
                    double _amount,
                    std::string _tiemstamp,
                    std::string _product,
                    OrderBookType _orderType);
    

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;


    static OrderBookType stringToOrderBookType(const std::string& s);

};