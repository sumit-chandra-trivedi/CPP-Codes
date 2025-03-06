#include<iostream>
using namespace std;

class A {

    public:
    void print();
};

class B 
{
    int a;
    friend void A:: print(); // Friend functions can be kept in any access modifier.
    //Friend functions doesnot have any this pointer.
};

class c
{
    int x;
    friend class A; //Class A can access all the properties of class c but vice-versa is not true.
};

void A::print()
{
    B b;
    b.a = 10;
    cout<<"Hello World "<<b.a;
}

int main()
{
    A a;
    B c;
    a.print();

}