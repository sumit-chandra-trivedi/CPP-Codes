#include <iostream>
using namespace std;
class vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;
    vehicle()
    {
        cout<<"Vehicle constructor is called "<<endl;
    }
    vehicle(int z)
    {
        cout<<"vehicles parametrized constructor is called "<<endl;
    }
    ~vehicle()
    {
        cout<<"Vehicle destructor is called "<<endl;
    }
};
class car : protected vehicle
{
public:
    int numGears;
    // void setnumTyres(int numTyres)
    // {
    //     this->numTyres = numTyres;
    // }

    // void Print()
    // {
    //     cout << "NUMTYRES : " << numTyres << endl;
    //     cout << "colors : " << color << endl;
    //     cout << "numgears : " << numGears << endl;
    // }
    // car():vehicle(5)   -->syntax for explicitly calling parametrized constructor of parent class.
    // {
    //     cout<<"car's parametrized constructor is called "<<endl;
    // }
    // car()
    // {
    //     cout<<"car constructor is called "<<endl;
    // }
    car(int x):vehicle(x)
    {
        cout<<"cars parametrized construxtor is called "<<endl;
        
    }
    car(int x,int y):vehicle(x)
    {
        cout<<"cars parametrized construxtor is called "<<endl;
        numGears=100;
    }
    ~car()
    {
        cout<<"car destructor is called "<<endl;
    }
};
class honda : public car
{
    public:
    honda():car(5)
    {
        cout<<"honda default constructor "<<endl;
    }
    honda(int x,int y):car(x,y)
    {
        cout<<"honda default constructor "<<endl;
    }
    ~honda()
    {
        cout<<"honda destructor is called "<<endl;
    }
    int model;
      void setnumTyres(int numTyres)
    {
        this->numTyres = numTyres;
    }
    void setColor(string color)
    {
        this->color=color;
    }
     void Print()
    {
        cout << "NUMTYRES : " << numTyres << endl;
        cout << "colors : " << color << endl;
        cout << "numgears : " << numGears << endl;
    }

};
int main()
{
    // car c(5);
    honda h(10,20);
    h.setnumTyres(4);
    h.setColor("white");
    h.numGears = 8;
    h.Print();
}
/*In inheritance constructor is always called first for parent class and then for  child class
while destructor is always called first for child class and then for parent class.

Implicitly only the default constructor is called and if we want to call parametrized constructor
 then  we will have to do it explicitly.

 Destructors can never have parameters.*/
