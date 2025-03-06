#include<iostream>
#include<memory>
using namespace std;

class MyClass{

    public:
        MyClass(){cout<<"constructor called"<<endl;}
        ~MyClass(){cout<<"Destructor called";}
};


int main()
{
    unique_ptr<MyClass> uPtr = make_unique<MyClass>();
}