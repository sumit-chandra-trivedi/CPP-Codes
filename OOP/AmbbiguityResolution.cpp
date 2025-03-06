#include <iostream>
using namespace std;
class Base1
{

public:
    void greet()
    {
        cout << "Namaste, Ka Haal Ba" << endl;
    }
};
class Base2
{

public:
    void greet()
    {
        cout << "Namaste, Kaise Ho " << endl;
    }
};
class Base3
{

public:
    void greet()
    {
        cout << "Namaste, Ellau Wana Ru " << endl;
    }
};
class Derived : public Base1, public Base2,public Base3
{
public:
    void greet()
    {
        Base3::greet();
    }
};
int main()
{
    Derived obj;
    obj.greet();
}
