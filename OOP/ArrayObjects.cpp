#include <iostream>


using namespace std;

class Employee
{
private:
    int Id;
    int Salary;

public:
    void SetId()
    {
        cout << "Enter The Id Of The Employee " << endl;
        cin >> Id;
    }
    void GetId()
    {
        cout << "The Id Of This Employee Is " << Id << endl;
    }
};
int main()
{
    Employee *Fb=new Employee[4];
    for (int i = 0; i < 4; i++)
    {
        Fb[i].SetId();
        Fb[i].GetId();
    }
}
