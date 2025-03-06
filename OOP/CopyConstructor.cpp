#include <iostream>
using namespace std;
class Number
{
private:
    int a;

public:
    Number()
    {
        a = 0;
        cout<<"The Default Constructor Is Called"<<endl;
    }
    Number(int x)
    {
        a = x;
        cout<<"The Parametrized Constructor Is Called"<<endl;
    }
    // When No Copy Constructor Is Found Compiler Supplies Its Own Copy Constructor;
    Number(const Number   &obj)
    {
        cout << "The Copy Constructor Is Called " << endl;
        a = obj.a;
    }
    void Display()
    {
        cout << "The Number Is " << a << endl;
    }
    ~Number()
    {
        cout<<"Destructor Called "<<endl;
    }
};
int main()
{
    Number n1, n2, n3, n4;
    n1 = Number();
    n1.Display();
    n2 = Number(50);
    n2.Display();
    n3 = Number(n1); // Copy Constructor Invoked.
    n3.Display();
    n4 = n2; // Copy Constructor Not Invoked.Destructor Not Called Why?==>Bcs Constructor Is Not Called Here.Values In the Already Created Obbject Is Being Changed. 
    n4.Display();
    Number n5 = n2;
    n5.Display();
    Number n6; // Copy Constructor Not Invoked.
    n6 = n1;
    n6.Display();
}