#include <iostream>
using namespace std;

// base class
class Employee
{

public:
    int Id;
    float salary;
    Employee() {}
    Employee(int x)
    {
        Id = x;
        salary = 75000;
    }
};
class Programmer :public Employee
{
public:
    // Programmer(int x) 
    // {
    //     Id = x;
    // }
    int languagecode = 5;
};
int main()
{
    Programmer sumit;

    sumit.Id=500;
    cout<<sumit.Id;
    
}