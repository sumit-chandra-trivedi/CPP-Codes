#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    int age;
    static int totalStudents; // a static member reference is not relative to a specific object.It means that property belongs to class not to an object.
    student()
    {
        totalStudents++;
    }
    int getRollno()
    {
        return rollno;
    }
    static int gettotalstudents() //static function --> It belongs to the class and we don't need any object to access it.
    {
        return totalStudents;
    }
};
int student ::totalStudents = 0; //   initialize static data members
int main()
{
    student s1, s2, s3, s4, s5;
    s1.rollno = 100; // this->rollno=100 is not valid as 'this' may only be used inside a nonstatic member function;
    s1.age = 1000;

    cout << student::totalStudents << endl; // static member  should be accessed like this.
    cout << student::gettotalstudents();
}