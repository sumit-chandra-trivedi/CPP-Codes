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
 Complex::Complex(int x,int y=10)//WE CAN INITIALIZE THE VALUE OF Y HERE.IF NO VALUE IS PASSED FOR Y THEN Y WILL TAKE THIS VALUE.
 {
     a=x;
     b=y;
    
 }
int main()
{
    Complex c1(50);//ONLY ONE VALUE IS PAASED IN ARGUMENT SO IT WILL TAKE ANOTHER VALUE AS THE ONE INITIALISED IN THE CONSTRUCTOR.
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