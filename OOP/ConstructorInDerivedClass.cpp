#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Class Constructor Called " << endl;
    }
    void print_data(void)
    {
        cout << "The Value Of Data1 Is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Class Constructor Called " << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;
    public:
    Derived(int a,int b,int c,int d) : Base1(a), Base2(b), derived1(c), derived2(d){};
};

int main()
{
    Derived d(5,2,3,4);
    d.print_data();
}