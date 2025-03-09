#ifndef EQTYSTCK_H
#define EQTYSTCK_H

#include "stock.h"

class EquityStock : public Stock{

protected:
    double volatility;
public:
    EquityStock(double volt_val,const std::string& sym,double p,int v,double t);

    void updatePrice();
    double calculateDividend() const;
};

#endif