#include<iostream>
#include<memory>
using namespace std;

class MyClass{

    public:

    MyClass()
    {
        cout<<"Constructor called "<<endl;
    }

    ~MyClass()
    {
        cout<<"Destructor called "<<endl;
    }


};

int main()
{
    shared_ptr<MyClass> sPtr1 = make_shared<MyClass>();
    cout<<"Shared Count : "<<sPtr1.use_count()<<endl;
    shared_ptr<MyClass>sPtr2 = sPtr1;
}