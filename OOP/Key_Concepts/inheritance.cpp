#include <iostream>
using namespace std;

class A {
    private:
    int x;
    protected:
    int y;
    public:
    int z;
};

class B : protected A {
    private:
    int a;
    public:

        void print()
        {
            y = 1;
            z =10;
            cout<<"y is "<<y<<" z is "<<z;
        }
};

class C : public B {
    public:
    void print()
    {
        cout<<"y is "<<y<<" z is "<<z;
    }
};


int main()
{
    B b;
    b.print();
    C c;
    c.print();
}

