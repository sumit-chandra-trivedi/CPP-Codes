#include<iostream>
using namespace std;
#include"CNQueue.h"
int main()
{
    QueueUsingArray<int> q;
    q.enqueue(100);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    q.enqueue(10000);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    cout<<((q.isEmpty())? "true":"false");
}

class A
{
    int* m;
public:
    A(size_t size)
    {
        try{
            m = new int[size];
            std::cout<<"Hello"<<std::endl;
        }
        catch(...)
        {
            std::cout<<"Exception"<<std::endl;
        }
    }

    ~A()
    {
        delete m;
        std::cout<<"Destructor of A"<<std::endl;
        thhrow 10;
    }

    int* getBuffer{return m;}
};

int foo()
{
    try
    {
        A obj(10);
        throw 10;
    }
    catch(...)
    {
        std::cout<<"Exception in main"<<std::endl;
    }
    system("pause");
    return 0;
}
int main()
{
    foo();

    return 0;
}