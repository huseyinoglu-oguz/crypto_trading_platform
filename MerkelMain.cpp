#include <iostream>
#include <vector>

#include "MerkelMain.h"
#include "OrderBookEntry.h"


MerkelMain::MerkelMain()
{}

void MerkelMain::init()
{
    loadOrderBook();
    int input;
    while(true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }

}

int MerkelMain::getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    return userOption;
}

void MerkelMain::loadOrderBook()
{ 

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
}

void MerkelMain::printMenu()
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    std::cout << "Help - choose options from the menu" << std::endl;

    std::cout << "1: Print help" << std::endl;

    std::cout << "2: Print exchange stats" << std::endl;

    std::cout << "3: Place an ask" << std::endl;

    std::cout << "4:  Place a bid" << std::endl;

    std::cout << "5: Print wallet" << std::endl;

    std::cout << "6:  Continue" << std::endl;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}

void MerkelMain::printMarketStats()
{
    std::cout << "Order Book Contains : " << entries.size() << "entries" << std::endl;
}

void MerkelMain::enterAsk()
{
    std::cout << "Make an ask - enter the amount" << std::endl;
}

void MerkelMain::enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void MerkelMain::printWallet()
{
    std::cout << "Your Wallet is empty" << std::endl;
}

void MerkelMain::gotoNextTimeframe()
{
    std::cout << "Continue" << std::endl;
}

void MerkelMain::processUserOption(int userOption)
{


    if (userOption == 1)
    {
        printMenu();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterAsk();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotoNextTimeframe();
    }
    if (userOption < 1 || userOption > 6)
    {
        std::cout << "WRONG OPTION ! Plese Type in 1-6 " << std::endl;
    }

}