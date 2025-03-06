#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public:

    Rectangle(int len, int bdh) : length(len), breadth(bdh){}

    int Area()
    {
        return length*breadth;
    }

};

int main()
{
    shared_ptr<Rectangle> R1 = make_shared<Rectangle>(10,5);
    R1->Area();
    weak_ptr<Rectangle> R2;

    R2 = R1;
    R2->Area(); // ->> This will throw error as weak pointer doesnot have access to attribbutes of an object.
}