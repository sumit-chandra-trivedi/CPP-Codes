#include <iostream>
using namespace std;
class student
{
    public:
    int age;
    int const rollno;
    int& x;
    student(int r,int age) : rollno(r),age(age),x(this->age)
    {

    }
};
int main() {
    student s1(100, 23);
    s1.x = 100;
    cout << s1.rollno << " " << s1.age << " " << s1.x;
}
// Initialisation List will be taken help of whenever we have constant data memeber or reference data memeber;