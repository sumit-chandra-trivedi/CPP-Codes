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
    //shared_ptr<Rectangle> R1(new Rectangle(10,5));
    shared_ptr<Rectangle> R1 = make_shared<Rectangle>(10,5);
    cout<<R1->Area()<<endl;
    shared_ptr<Rectangle> R2;
    R2 = R1; //Both R1 and R2 now points to the same object.
    cout<<R2->Area()<<endl;
    cout<<R1->Area()<<endl;
    cout<<R1.use_count()<<endl;

}