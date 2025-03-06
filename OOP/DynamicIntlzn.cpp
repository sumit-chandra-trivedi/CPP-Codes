#include <iostream>
using namespace std;
class BankDeposit
{
private:
    int Principal;
    int years;
    int ReturnValue;
    int InterestRate;

public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r) : Principal(p)
{
    //Principal = p;
    years = y;
    InterestRate = r;
    ReturnValue=Principal;
    for ( int i = 0; i < y; i++)
    {
        ReturnValue=ReturnValue*(1+InterestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    Principal = p;
    years = y;
    InterestRate = float (r)/100;
    ReturnValue=Principal;
    for ( int i = 0; i < y; i++)
    {
        ReturnValue=ReturnValue*(1+InterestRate);
    }
    
}
void BankDeposit::show()
{
    cout<<"The Return Value Is "<<ReturnValue;
}

int main()
{
    BankDeposit bd1,bd2,bd3;
    int p,y,R;
    float r;
    cout<<"Enter The Value Of p, y, r"<<endl;
    cin>>p>>y>>R;
    bd1=BankDeposit(p,y,r);
    bd1.show();
}
