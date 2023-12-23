#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry( double _price,
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