#include<iostream>
#include "EquityStock.h"

EquityStock::EquityStock(double volt_val,const std::string& sym,double p,int v,double t) : Stock(sym, p, v, t),volatility(volt_val){};
void EquityStock::updatePrice()
{
    double percnt_change = (rand() % 100) / 100.0 * volatility;

    double price_change = (rand() % 2 == 0 ? 1 : -1) * percnt_change;

    price += price_change;

    if(price<0)
    {
        price  = 0;
    }
}

double EquityStock::calculateDividend () const
{
    return price * 0.05;
}