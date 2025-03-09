#include<iostream>
#include<vector>
#include "IndexFundsStock.h"

IndexFundsStock::IndexFundsStock(const std::string& sym,double p,int v,double t) :
                 Stock(sym, p, v, t){};


void IndexFundsStock::addStock(Stock* stock)
{
    trackedStocks.push_back(stock);
}
void IndexFundsStock::updatePrice()
{
    double toatalPrice = 0;
    for(auto& stock : trackedStocks)
    {
         toatalPrice += stock->getPrice();
    }

    price = toatalPrice/trackedStocks.size();
}

double IndexFundsStock::calculateDividend () const
{
    double totalDividend = 0;
    for(auto& stock : trackedStocks)
    {
        totalDividend += stock->calculateDividend();
    }
    return totalDividend;
}