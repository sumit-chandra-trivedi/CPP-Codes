#include<iostream>
using namespace std;

class A{

    public:
    A(){cout<<"A is called "<<endl;}
    void show()
    {
        cout<<"I am from class A"<<endl;
    }
};

class B : public virtual A{
    public :

    B(){cout<<"B is called "<<endl;}
    // void show()
    // {
    //     cout<<" I am from class B"<<endl;
    // }
};

class C : public virtual A{

    public:

    C(){cout<<"C is called"<<endl;}

    // void show()
    // {
    //     cout<<"I am from class C"<<endl;
    // }
};

class D : public B, public C{
    public:

    D(){cout<<"D is called"<<endl;}
    
    // void show(){
    //     A::show();
    // }
    
};

int main()
{
    D d;
    d.show();
    B b;
    // b.show();
    // cout<<&b<<endl;
    // cout << "Address of A (via B): " << static_cast<A*>(&b) << endl;
    // cout<<&d<<endl;

    // cout << "Address of A (via B): " << static_cast<A*>(static_cast<B*>(&d)) << endl;
    // cout << "Address of A (via C): " << static_cast<A*>(static_cast<C*>(&d)) << endl;
    return 0;
}