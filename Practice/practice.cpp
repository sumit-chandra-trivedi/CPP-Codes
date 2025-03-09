#include <iostream>
class A{
int i;

public:
    A()
    {
        std::cout<<"Default constructor called"<<std::endl;
    }
    A(int a) : i(a)
    {
        std::cout<<"Parameter constructor called"<<std::endl;
    }

    A(const A& obj)
    {
        i = obj.i;
        std::cout<<"Copy constructor called"<<std::endl;
    }

    A operator+ (const A& obj)
    {
        std::cout<<"+ operator called"<<std::endl;
        int temp = i + obj.i;
        A obj1(temp);
        return obj1;
    }
};
int main()
{
    A obj1(10), obj2(20);
    A obj3 = obj1 + obj2;

    return 0;
}