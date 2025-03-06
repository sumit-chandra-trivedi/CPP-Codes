#include <iostream>
using namespace std;
class Base
{
private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    data3 = data2 * getdata1();
}
void Derived::display()
{
    cout<<"Value Of Data 1 Is "<<getdata1()<<endl;
    cout<<"Value Of Data 2 Is "<<data2<<endl;
    cout<<"Value Of Data 3 Is "<<data3<<endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
}
