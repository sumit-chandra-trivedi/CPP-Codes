#include <iostream>

using namespace std;

class ComplexNumber
{
private:
    int a;
    int b;

public:
    void SetData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void GetData()
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
    void Sum(ComplexNumber o1, ComplexNumber o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main()
{
    ComplexNumber o1;
    o1.SetData(1, 2);
    o1.GetData();
    ComplexNumber o2;
    o2.SetData(3, 4);
    o2.GetData();
    ComplexNumber o3;
    o3.Sum(o1, o2);
    o3.GetData();
}
