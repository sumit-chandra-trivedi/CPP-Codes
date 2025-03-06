#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The Roll Number Is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The Marks Obtained In Maths Are : " << maths << endl;
    cout << "The Marks Obtained In Physics Are : " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your Percentage Is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result sumit;
    sumit.set_roll_number(100);
    sumit.set_marks(80,100);
    sumit.display();
}