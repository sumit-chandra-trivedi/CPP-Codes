#include <iostream>
int main()
{
    int a = 10;
    int b = 20;

    auto add = [&](){
        return a + b;
    };

    a = 20;

    std::cout<<"Result is : "<<add();

}