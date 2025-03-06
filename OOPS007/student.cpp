#include<iostream>
using namespace std;

class student
{
    private :
    int age;
    public: 
    int rollNum;
    student(int rollNum, int age)
    {
        cout<<"this "<<this<<endl;
        this->rollNum = rollNum;
        this->age = age;
    }
    student(int rollNum)
    {
        cout<<"this "<<this<<endl;
        this->rollNum = rollNum;
    }

    void Display()
    {
        cout<<"Age "<<age<<" rollNum "<<rollNum<<endl;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};