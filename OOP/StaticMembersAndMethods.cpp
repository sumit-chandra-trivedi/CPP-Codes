#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        //cout<<id; --> throws an error because a static function can only access static members;
        cout << "The value of count is " << count << endl;
    }
};
int Employee::count = 0;
int main()
{
    Employee sumit, rahul, shyam;

    sumit.setData();
    sumit.getData();
    Employee::getCount();
    rahul.setData();
    rahul.getData();
    Employee::getCount();
    shyam.getData();
}
/*static variables are also known as class variable.
static function have access to only other static variables or functions.
Static Members always need to be defined in the global scope
Global variables are accessible everywhere.
Static variables inside functions retain their value between function calls.
Static global variables (declared outside functions) are only accessible within the same file.*/

Variable Type	                        Can Use extern?	         Reason
Global Variable	                            ✅ Yes	           It has external linkage (visible across files)
Static Global Variable (File Scope)	        ❌ No	           It has internal linkage (restricted to the same file)
Local Static Variable (Function Scope)	    ❌ No	           It is only visible inside the function
