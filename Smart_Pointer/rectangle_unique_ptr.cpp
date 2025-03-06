#include<iostream>
#include<memory>
using namespace std;

class Rectangle{

    private:

        int length;
        int breadth;

    public:

        Rectangle(int len, int bdth) : length(len), breadth(bdth){}

        int Area()
        {
            return length*breadth;
        }
};

int main()
{
    unique_ptr<Rectangle> R1 = make_unique<Rectangle>(10,5);
    cout<<R1->Area()<<endl;
    unique_ptr<Rectangle> R2 = move(R1);
    cout<<R2->Area()<<endl;
}
