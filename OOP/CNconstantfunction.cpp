#include<iostream>
using namespace std;
class Fraction
{
    private:
    mutable int numerator ; //In C++, a mutable member variable is a variable that can be modified even if the object is declared as const. This is useful for caching results or storing other information that doesn't affect the logical state of the object.
    //On the other hand, a non-mutable member variable (also known as a "const member variable") is a variable that cannot be modified once it is initialized. If an object is declared as const, all its non-mutable member variables are also considered const and cannot be changed.
    int denominator;
    public:
    Fraction(){}
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    int getNumerator ()const
    {
      return numerator;
    }
    int getDenominator()const
    {
      return denominator;
    }
    void setNumerator(int n)
    {
      numerator = n;
    }
    void setDenominator(int d)
    {
     denominator=d;
    }
    void print()
    {

    }
    
};

int main()
{
    Fraction f1(20,10);
    Fraction(15,4);
    const Fraction  f3;
    cout<<f3.getNumerator()<<" "<<f3.getDenominator();
    f3.setNumerator(100);

}