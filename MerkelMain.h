
#pragma once

#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{

    public:
        MerkelMain();

        void init();
    
    private:
        void loadOrderBook();

        int getUserOption();


        void printMenu();


        void printMarketStats();


        void enterAsk();
   

        void enterBid();
   

        void printWallet();
 

        void gotoNextTimeframe();


        void processUserOption(int userOption);


        std::vector<OrderBookEntry> entries;


};