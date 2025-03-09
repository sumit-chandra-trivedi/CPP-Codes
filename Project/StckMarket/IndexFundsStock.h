#ifndef IDXFNDSSTCK_H
#define IDXFNDSSTCK_H

#include<iostream>
#include<vector>
#include "stock.h"

class IndexFundsStock : public Stock{

protected:

    std::vector <Stock*> trackedStocks;

public:

    IndexFundsStock(const std::string& sym,double p,int v,double t);
    void updatePrice() override;
    double calculateDividend() const override;
    void addStock(Stock* stock);
};

#endif