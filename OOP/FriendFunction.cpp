#include <iostream>

using namespace std;

class ComplexNumber
{
private:
    int a;
    int b;

public:
    friend ComplexNumber SumComplex(ComplexNumber c1, ComplexNumber c2);
    void SetData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void GetData()
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
};
ComplexNumber SumComplex(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber c3;
    c3.SetData((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    ComplexNumber o1;
    o1.SetData(1, 2);
    o1.GetData();
    ComplexNumber o2;
    o2.SetData(3, 4);
    o2.GetData();
    ComplexNumber sum;
    sum = SumComplex(o1, o2);
    sum.GetData();
}


/* PROPERTIES OF FRIEND FUNCTION :
1.NOT IN THE SCOPE OF CLASS.
2.SINCE IT IS NOT IN THE SCOPE OF THE CLASS, IT CANNOT BE CALLED FROM THE OBJECT OF TAHT CLASS.c1.SumComplex()== Invalid.
3.CAN BE INVOKED WITHOUT THE HELP OF ANY OBJECT.
4.USUALLY CONTAINS THE OBJECTS AS ARGUMENTS  .
5.CAN BE DECLARED INSIDE PUBLIC OR PRIVATE SECTION OF THE CLASS.
6.IT CANNOT ACCESS THE MEMBERS DIRECTLY BY THEIR NAMES AND NEED Object_Name.Member_Name to access any member.*/
