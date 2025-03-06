#include <iostream>
using namespace std;
#include <cstring>

class student
{
    int age;

public:
    char *name;

public:
    student(int age, char *name)
    {
        this->age = age;
        this->name = new char(strlen(name) + 1);
        strcpy(this->name, name);
    }
    student(student const &s)
    {

        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[] = "sumit";
    student s1(25, name);
    // s1.display();
    name[0] = 'a';
    student s2(30, name);
    student s3(s2);
    s3.name[0]='l';
    s1.display();
    s2.display();
    s3.display();
}