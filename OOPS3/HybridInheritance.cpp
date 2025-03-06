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
        cout << "Vehicle constructor is called " << endl;
    }
    vehicle(int z)
    {
        cout << "vehicles parametrized constructor is called " << endl;
    }
    void print()
    {
        cout<<"vehicle"<<endl;
    }
    ~vehicle()
    {
        cout << "Vehicle destructor is called " << endl;
    }
};
class car : public vehicle
{
public:
    int numGears;
    // void setnumTyres(int numTyres)
    // {
    //     this->numTyres = numTyres;
    // }

   
    // car():vehicle(5)   -->syntax for explicitly calling parametrized constructor of parent class.
    // {
    //     cout<<"car's parametrized constructor is called "<<endl;
    // }
    car()
    {
        cout<<"car constructor is called "<<endl;
    }
    car(int x) : vehicle(x)
    {
        cout << "cars parametrized construxtor is called " << endl;
    }
    car(int x, int y) : vehicle(x)
    {
        cout << "cars parametrized construxtor is called " << endl;
        numGears = 100;
    }
     void print()
    {
        cout << "NUMTYRES : " << numTyres << endl;
        cout << "colors : " << color << endl;
        cout << "numgears : " << numGears << endl;
    }
    ~car()
    {
        cout << "car destructor is called " << endl;
    }
};
class Truck : public vehicle
{
    public:
    Truck()
    {
        cout << "Truck constructor is called " << endl;
    }
};
class Bus:public car,public  Truck
{
    public :
    Bus()
    {
        cout<<"Bus constructor is called "<<endl;
    }
};
int main()
{
Bus b;
b.car::print();
}