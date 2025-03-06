#include<iostream>
#include<memory>
using namespace std;

int main()
{
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    //unique_ptr<int>unPtr2 = unPtr1; --->Throws error as Unique Pointer Cannot be shared.
    unique_ptr<int>unPtr2 =  move(unPtr1); // now unPtr2 becomes owner of unPtr1;
    //once the ownershhip of a unique pointer is moved to another unique pointer the first unique pointer points to NULL.
    //cout<<*unPtr1;  --->This will now throw an exception.

    unique_ptr<int>unPtr ; //This will point to NULL
    unPtr = make_unique<int>(25); // This will work fine as we are assigning the unique pointer using make_unique which is not a arw pointer.
    unPtr = new int(5); //will not work and will result in a compilation error. You cannot directly assign a raw pointer (from new) to a unique_ptr because unique_ptr is designed to manage ownership and expects a managed pointer, not a raw one.
}