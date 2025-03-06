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
        cout << "I Am The Default Constructor" << endl;
    }
    Number(int x)
    {
        a = x;
        cout << "I Am The Parametrized Constructor" << endl;
    }
    void Display()
    {
        cout << "The Number Is " << a << endl;
    }
    ~Number()
    {
        cout << "Destructor  Called " << endl;
    }
};
int main()
{
    Number n1, n2;   // Every Time We Create Objects Like This Default Constructor Is Called.
    n2 = Number(50); // At This Step WE Overwrite The Values Assigned To Object n2.So The Destructor Will be Called To Destruct The Object n2 Created By The Default Constructor.
    n1.Display();
    n2.Display();
}