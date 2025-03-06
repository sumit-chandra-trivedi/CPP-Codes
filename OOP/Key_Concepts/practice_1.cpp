#include<iostream>
using namespace std;

class MyClass{

    int* data;

    public:

    MyClass(int val) : data(new int(val)){} //Its not necessary to always pass a variable that is a memeber variable as an argument to the constructor. 
    //MyClass(const MyClass& obj){data = obj.data;} //shallow copy
    MyClass(const MyClass& obj){data = new int(*((obj.data)));}//deep copy
    ~MyClass(){
        if(data != nullptr) delete data; //To avoid memory already deleted since we are using shallow copy.
        data = nullptr;}
};


int main()
{
    MyClass obj(1);
    MyClass obj1 = obj;
    return 0;
}


// Additional Considerations:
// Automatic Management: If you're using smart pointers (like std::unique_ptr or std::shared_ptr), you don’t need to worry about manual memory management, as they automatically handle resource cleanup. This can prevent issues related to memory leaks and dangling pointers.
// Rule of Three: If your class manages resources (like dynamic memory), you should implement the copy constructor, copy assignment operator, and destructor (the Rule of Three) to ensure proper resource management.