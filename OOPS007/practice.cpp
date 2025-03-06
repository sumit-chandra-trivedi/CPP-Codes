#include<iostream>
#include "student.cpp"
using namespace std;

class Fraction{
   int numerator;
   int denominator;

   public:

   Fraction()
   {
      numerator = 1;
      denominator = 2;
   }

   Fraction(int numerator, int denominator)
   {
      this->numerator = numerator;
      this->denominator = denominator;
   }

   void print()
   {
      cout<<" The Fraction is "<<numerator<<"/"<<denominator<<endl;
   }

   void simplify()
   {
        int gcd = 1;
        int j = min(numerator, denominator);
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

   Fraction add(Fraction const f2)
   {
      int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;

   }

   Fraction operator+(Fraction const &f2)
   {
      int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        Fraction fnew(num, lcm);
        fnew.simplify(); // means call simplify on this->
        return fnew;
   }

};


int main()
{
   /*Fraction *f1 = new Fraction(1,3);
   f1->print();
   Fraction *f2 = new Fraction;
   f2->print();
   f1->add(&f2);*/

   Fraction f1(1,2);
   Fraction f2(1,3);
   Fraction f3 = f1+f2;
   f3.print();
}