#include<iostream>
using namespace std;
class Complex
{
private:
   int a,b;
public:
// CREATING A CONSTRUCTOR
// CONSTRUCTOR IS A SPECIIAL MEMBER FUNCTION WITH THE SAME NAME AS THAT OF THE CLASS
// IT IS USED TO INITIALIZE THE OBJECTS OF ITS CLASS.
// IT IS AUTOMATICALLY INVOKED WHENEVER AN OBJECT IS CREATED.
 Complex(void);  // CONSTRUCTOR DECLARATION.
 void PrintNumber()
 {
     cout<<"your number is "<<a<<" + "<<b<<"i\n";
 }
    
};
 Complex::Complex(void) //THIS A DEFAULT CONSTRUCTOR AS IT TAKES NO PARAMETERS.
 {
     a=10;
     b=1;
     cout<<"HELLO\n";
 }
int main()
{
    Complex c1;
    Complex c2;
    c1.PrintNumber();
    c2.PrintNumber();

}
/* PROPERTIES OF CONSTRUCTOR:
 1. IT SHOULD BE DECLARED IN THE PUBLIC SECTION OF THE CLASS.
 2. THEY ARE AUTOMATICALLY INVOKED WHENEVER THE OBJECT IS CREATED.
 3. THEY CANNOT RETURN VALUES AND DONT HAVE ANY RETURN DATA TYPES.
 4. IT CAN HAVE DEFAULT ARGUMENTS.
 5. WE CANNOT REFER TO THEIR ADDRESS.*/