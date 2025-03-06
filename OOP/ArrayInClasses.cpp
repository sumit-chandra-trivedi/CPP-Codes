#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class Shop
{
    int ItemId[100];
    int ItemPrice[100];
    int Counter;
    public:
    void initCounter(){Counter=0;} //---> Whenever Called This Function Will Reset The Counter Value To Zero;
    void SetPrice();
    void DisplayPrice();


};
void Shop::SetPrice()
    {
      cout<<"Enter The ID Of Product "<<Counter+1<<endl;
      cin>>ItemId[Counter];
      cout<<"Enter The Price Of Product "<<Counter+1<<endl;
      cin>>ItemPrice[Counter];
      Counter++;

    }
    void Shop::DisplayPrice()
    {
        for(int i=0;i<Counter;i++)
        cout<<"The Price Of Product With ProcductId "<<ItemId[i]<<" Is "<<ItemPrice[i]<<endl;
    }
    int main()
    {
        Shop Dukaan;
        Dukaan.initCounter();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.DisplayPrice();
        Shop Dukaan1;
        Dukaan.initCounter();
        Dukaan.SetPrice();
        Dukaan.SetPrice();
        Dukaan.DisplayPrice();
      



    }
