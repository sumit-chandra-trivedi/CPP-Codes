#include<iostream>
#include<memory>
using namespace std;

class MyClass
{

    int data_1;
    unique_ptr<int> data_2;

    public:

    MyClass(int val_1, int val_2) : data_1(val_1)
    {
        data_2 = make_unique<int>(val_2);
    }

    MyClass(const MyClass& obj)
    {
        data_1 = obj.data_1;
        data_2 = make_unique<int>(*obj.data_2);
    }

    MyClass& operator=(const MyClass& obj)
    {
        if(this != &obj)
        {
            data_1 = obj.data_1;
            data_2 = make_unique<int>(*obj.data_2);
        }

        return *this;
    }
};


int main()
{
    MyClass c1(1,2);

}