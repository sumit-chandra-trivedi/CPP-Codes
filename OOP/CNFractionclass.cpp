#include <iostream>
using namespace std;
class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << numerator << "/" << denominator << endl;
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
    void add(fraction f2) // changing f1 itself
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify(); // means call simplify on this->
    }
    fraction addition(fraction f2) const // returning new fraction.
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        fraction fnew(num, lcm);
        fnew.simplify(); // means call simplify on this->
        return fnew;
    }
    fraction operator+(fraction const &f2) const // Operator Overloading.
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        fraction fnew(num, lcm);
        fnew.simplify(); // means call simplify on this->
        return fnew;
    }
    void multiply(fraction const &f2) 
    {

        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
    }

    fraction operator*(fraction const &f2)const
    {
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
    bool operator==(fraction const &f2) const
    {
        if(numerator == f2.numerator && denominator == f2.denominator)
        {
            return true;
        }
        else 
        return false;
    }
    
    fraction& operator++()
    {
        numerator=numerator+denominator;
        simplify();
        return *this;
    }
};

int main()
{
    fraction f1(10, 2);
    fraction f2(15, 4);
    fraction  f3=++(++f1);
    f3.print();
    f1.print();
    // f1.add(f2);
    // f1.print();
    // f1.multiply(f2);
    // fraction f3 = f1.addition(f2);
    // f3.print();
    // fraction f4 = f1 + f2;
    // f4.print();
    // fraction f5=f1 *f2;
    // f5.print();
    // bool res=f1==f2;
    // cout<<res;
}