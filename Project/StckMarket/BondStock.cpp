#include<iostream>
#include "BondStock.h"


BondStock::BondStock(double i,const std::string& sym,double p,int v,double t) :
                 Stock(sym, p, v, t),interestRate(i){};
// A fixed minimal price change (or you could link it to interest rates)
void BondStock::updatePrice() {
    // Price fluctuation is minimal for bond stocks
    price += price * 0.001 * trend;  // Slight price change based on trend
    if (price < 0) {
        price = 0;
    }
}

// Fixed dividend calculation (interestRate as a percentage of the price)
double BondStock::calculateDividend() const {
    return price * interestRate;  // Interest-based dividend
}
