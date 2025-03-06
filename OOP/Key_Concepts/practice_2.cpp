#include<iostream>
using namespace std;

class MyClass{

    private :

    int* data;

    public: 

    MyClass(int val) : data(new int(val)){}
    MyClass& operator=(const MyClass& other)
    {

        if(this != &other)
        {
            delete data;
            data = new int(*other.data);
        }

        return *this;
    }

    void print() const{cout<<*data<<endl;}
};

 

//What will be the output, and how does the copy assignment operator prevent memory leaks?