#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The Value Of Base1 Is " << base1int << endl;
        cout << "The Value Of Base2 Is " << base2int << endl;
        cout << "The Sum Of These Is " << base1int + base2int << endl;
    }
};
int main()
{

    Derived sumit;
    sumit.set_base1int(50);
    sumit.set_base2int(50);
    sumit.show();
}
