#include "EquityStock.h"
#include "IndexFundsStock.h"
#include "BondStock.h"
#include "stock.h"
#include<iostream>
#include<vector>
#include<thread>
int main()
{
    srand(time(0));  
    // EquityStock e(3,"Reliance",1200.56,10,2.5);

    // e.updatePrice();

    // std::cout<<"The updated price of stock is "<<e.getPrice()<<std::endl;
    // std::cout<<"The calculated dividend is "<<e.calculateDividend()<<std::endl;

    // Create an equity stock
    EquityStock equity(0.05, "AAPL", 150.0, 1000, 0.02);
    // Create a bond stock
    BondStock bond(0.03, "BND", 1000.0, 500, 0.01);
    // Create an index fund stock
    IndexFundsStock index("SP500", 0.0, 0, 0);


    std::vector <Stock*> stocks;
    stocks.push_back(&equity);
    stocks.push_back(&bond);
    stocks.push_back(&index);

    std::vector <std::thread> threads;
    for(Stock* stock : stocks)
    {
        threads.emplace_back(&Stock::updatePrice,stock);
    }
    // Add the equity and bond stocks to the index fund
    index.addStock(&equity); //--> Passing add of a derived object to a function thhat is expecting a base class object pointer -->concept of polymorphism.
    index.addStock(&bond);//-->At both these places there wont be object slicing because thhe function is expecting a pointer to object not an object
    
    // Update prices
    // equity.updatePrice();
    // bond.updatePrice();
    // index.updatePrice();
    
    // Display prices and dividends
    std::cout << "Equity Price: " << equity.getPrice() << ", Dividend: " << equity.calculateDividend() << std::endl;
    std::cout << "Bond Price: " << bond.getPrice() << ", Dividend: " << bond.calculateDividend() << std::endl;
    std::cout << "Index Fund Price: " << index.getPrice() << ", Dividend: " << index.calculateDividend() << std::endl;

    for(std::thread& th : threads)
    {
        th.join();
    }
    
    

    return 0;

}