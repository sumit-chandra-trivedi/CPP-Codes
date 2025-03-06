#include<iostream>
//#include "student.cpp"
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
        this->age + age;


























































        
         
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

int main()
{
    student s1(100,10);
    student s2(s1);
    s1.Display();
    s2.Display();
    student *s3 = new student(200,20);
    student *s4 = new student(*s3);
    s4->Display();
    

    

    
}