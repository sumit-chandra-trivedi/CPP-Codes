#include<iostream>
using namespace std;

class Base {

    int var;

    public:

    virtual void print()
    {
        cout<<" base class"<<endl;
    }
};

class Derived : public Base {

    int deriv_var;

    public:

    void print() override
    {
        cout<<"derived class "<<endl;
    }
};


void print_fun(Base& obj) // Object slicing will be observed here if we dont pass by reference . In order to avoid object slicing we can either pass by reference or use pointer. 
{
    obj.print();
}


int main()
{
    Derived der;
    print_fun(der);
    /*
    Derived* ptr = new Derived;
    print_fun(ptr);*/ //-->Object slicing will not happen
}