#ifndef BNDSTCK_H
#define BNDSTCK_H
#include "stock.h"

class BondStock : public Stock{

protected:
    double interestRate;

public:

    BondStock(double intrstRate,const std::string& sym,double p, int v, double t);
    void updatePrice() override;
    double calculateDividend() const override;
};

#endif