#include<iostream>
#include "stock.h"

Stock::Stock(const std::string& sym,double p,int v,double t) : symbol(sym),price(p),volume(v),trend(t){};

void Stock::setPrice(double price_val)
{
    if(price_val>0)
    price = price_val;
    else
    std::cout<<"Invalid Price"<<std::endl;
}

void Stock::setVolume(int volume_val)
{
    if(volume_val>0)
    volume = volume_val;
    else
    std::cout<<"Invalid value of volume"<<std::endl;
}

double Stock::getPrice()
{
    return price;
}

Stock:: ~Stock(){};




