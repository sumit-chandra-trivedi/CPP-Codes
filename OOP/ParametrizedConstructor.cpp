#include<iostream>
using namespace std;
class Complex
{
private:
   int a,b,c;
public:

 Complex(int,int);  // CONSTRUCTOR DECLARATION.
 void PrintNumber()
 {
     cout<<"your number is "<<a<<" + "<<b<<"i\n";
 }
    
};
 Complex::Complex(int x,int y) //THIS IS A PARAMETRIZED CONSTRUCTOR AS IT TAKES TWO PARAMETERS.
 {
     a=x;
     b=y;
    
 }
int main()
{
    Complex c1(1,2);
    Complex c2(3,4);
    c1.PrintNumber();
    c2.PrintNumber();

}
/* PROPERTIES OF CONSTRUCTOR:
 1. IT SHOULD BE DECLARED IN THE PUBLIC SECTION OF THE CLASS.
 2. THEY ARE AUTOMATICALLY INVOKED WHENEVER THE OBJECT IS CREATED.
 3. THEY CANNOT RETURN VALUES AND DONT HAVE ANY RETURN DATA TYPES.
 4. IT CAN HAVE DEFAULT ARGUMENTS.
 5. WE CANNOT REFER TO THEIR ADDRESS.*/