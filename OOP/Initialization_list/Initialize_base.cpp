#include<iostream>
using namespace std;

class Base{

    int base_var;

    public:

    Base(int x) : base_var(x)
    {
        cout<<"Base constructor called with value "<<base_var<<endl;
    }
};

class Derived : public Base{

    int deriv_var;

    public:

    Derived(int var_1, int var_2) : Base(var_1) ,deriv_var(var_2)
    {
        cout<<"Derived constructor called with value "<<deriv_var<<endl;
    }

};


int main()
{
    Derived obj(1,2);   
}