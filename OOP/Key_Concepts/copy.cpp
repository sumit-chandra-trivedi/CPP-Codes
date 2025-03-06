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

    A& operator=(const A& obj) {
    std::cout << "Assignment operator called" << std::endl;
    if (this != &obj) {
        i = obj.i;
    }
    return *this;
        }

    A operator+ (const A& obj)
    {
        std::cout<<"+ operator called"<<std::endl;
        int temp = i + obj.i;
        A obj1(temp);
        return obj1;
    }
};

    void func(A t) //Copy constructor will be called 
    {
        std::cout<<"Heelo world"<<std::endl;
    }

int main()
{
    A obj1(10), obj2(20);
    //A obj3;
    A obj3 = obj1 + obj2; //Many modern compilers optimize temporary object creation and eliminate calls to the copy constructor. This is called the Return Value Optimization (RVO) or Copy Elision.
    //func(obj1);
    return 0;
}