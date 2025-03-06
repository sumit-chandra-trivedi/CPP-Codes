#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    int imaginary;
    complex(int real, int imaginary)
    {
        this->real =real;
        this->imaginary=imaginary;
    }

    void add(complex complex)
    {
        this->real = this->real + complex.real;
        this->imaginary = this->imaginary + complex.imaginary;
    }

    void multiply(complex complex)
    {
        int x = this->real;
        this->real = this->real*(complex.real )- this->imaginary*(complex.imaginary);
        this->imaginary =  x*(complex.imaginary) + this->imaginary*(complex.real);
    }

    void print()
    {
        cout<<real<<" + i"<<imaginary<<endl;
    }
};

int main()
{
    complex c1(10,5);
    complex c2(5,5);
    //c1.add(c2);
    //c1.print();
    c1.multiply(c2);
    c1.print();

}