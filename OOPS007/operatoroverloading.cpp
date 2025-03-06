/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Fraction
{
  int numerator;
  int denominator;

public:
    Fraction (int numerator, int denominator)
  {
	this->numerator = numerator;
	this->denominator = denominator;
  }

  void print ()
  {
	cout << "Fraction is " << numerator << "/" << denominator << endl;
  }

  void simplify ()
  {
	int gcd = 1;
	int j = min (numerator, denominator);
	for (int i = 1; i <= j; i++)
	  {
		if (numerator % i == 0 && denominator % i == 0)
		  {
			gcd = i;
		  }
	  }
	numerator = numerator / gcd;
	denominator = denominator / gcd;
  }

  Fraction operator+(Fraction const &f2)
  {
	int lcm = denominator * f2.denominator;
	int x = lcm / denominator;
	int y = lcm / f2.denominator;

	int num = x * numerator + y * f2.numerator;
	Fraction f (num, lcm);

	simplify ();
	return f;
  }

  Fraction operator* (Fraction const &f2)
  {
	int num = numerator * f2.numerator;
	int den = denominator * f2.denominator;
	Fraction f(num,den);
	simplify ();
	return f;
  }
  /*
  Fraction operator++() ---> This also works fine 
  {
	int num = numerator + denominator;
	Fraction f(num,denominator);
    simplify ();
    return f;
  }*/

  Fraction operator++()
  {
	  numerator = numerator + denominator;
    simplify ();
    return *this;
  }

  Fraction operator++(int)
  {
    Fraction fnew = Fraction(numerator,denominator);
	  numerator = numerator + denominator;
    simplify ();
    fnew.simplify ();
    return fnew;
  }



};



int main ()
{
  Fraction f1 (10, 3);
  Fraction f2 (5, 4);
  Fraction f3 = f2+f1;
  Fraction f4 = f1*f2;
  //Fraction f5 =++(++f1);
  Fraction f6 = f1++;
  f1.print ();
  f2.print();
  f3.print ();
  f4.print();
  //f5.print();
  f6.print();
  //f2.add(f1);
  //f2.multiply (f1);
  //f2.print ();

  return 0;
}

