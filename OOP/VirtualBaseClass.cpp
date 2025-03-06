#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your Roll Number Is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths =m1;
        physics =m2;

    }
    void print_marks()
    {
        cout<<"Your Result Is Here "<<endl
            <<"Maths : "<<maths<<endl
            <<"Physics : "<<physics<<endl;
    }
};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout<<"Your PT Score Is "<<score<<endl;
    }
};

class Result : public Test,public Sports
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your Total Score Is "<<total<<endl;
    }
};

int main()
{
    Result sumit;
    sumit.set_number(500);
    sumit.set_marks(90,80);
    sumit.set_score(90);
    sumit.display();

}