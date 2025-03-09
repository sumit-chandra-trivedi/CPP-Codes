#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock {

protected:

    std::string symbol;
    double price;
    int volume;
    double trend;
public:

    Stock(const std::string& sym,double p, int v, double t);
    void setPrice(double price_val);
    void setVolume(int volume_val);
    double getPrice();

    virtual void updatePrice() = 0;
    virtual double calculateDividend() const = 0;

    virtual ~Stock();


};

#endif