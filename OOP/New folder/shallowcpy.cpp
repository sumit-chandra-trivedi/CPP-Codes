#include<iostream>
#include<cstring>
using namespace std;

class student{
    public:
    int roll_num;
    char *name;
    student(int roll_num, char *name)
    {
        cout<<"constructor called "<<endl;
        this->roll_num = roll_num;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    /*If there is no defined copy constructotr default copy constructor is called.
    The default copy constructor does shallow copy.*/

    student(student const &s)
    {
        cout<<"copy constructor called "<<endl;
        this->roll_num = s.roll_num;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    void print()
    {
        cout<<"The roll_num of "<<name<<" Is "<<roll_num<<"\n";
    }


};

int main()
{
    char name[] = "sumit";
    student s1(10,name);
    student s2(11,name);
    s2.name[1] = 'A';
    student s3(s1);
    s1.name[0] ='A';
    s1.print();
    s2.print();
    s3.print();
}

/*class shallow{
public:
    char* data;
    shallow(const char* str)
    {
        data = new char[strlen(str) + 1];
        strcpy(data,str);
    }
    
    
    shallow(const shallow& source) : data(source.data){
        cout<<"shallow copy constructor called "<<endl;
    }

    ///COMMENTED///
    shallow(const shallow& source) {

        this->data = new char[strlen(data) + 1];
        strcpy(data,source.data);

        cout<<"deep copy constructor called "<<endl;
    }///COMMENTED//

    ~shallow(){
        delete[] data;
    }

    void display() const {
        cout<<"Data : "<< data <<endl;
    }


};

int main()
{
    shallow obj1("hello");
    shallow obj2 = obj1;
    cout<<static_cast<void*>(obj1.data)<<endl;
    cout<<static_cast<void*>(obj2.data)<<endl;
    obj1.display();
    obj2.display();
    return 0;
}*/

/*Your provided C++ code has a problem due to the shallow copy constructor implementation. The shallow copy constructor just copies the pointer data from the source object, resulting in both objects pointing to the same memory. When one of them is destroyed, the destructor deletes the shared memory, leaving the other with a dangling pointer. This will likely cause undefined behavior or a crash when the second object tries to delete the same memory.

To demonstrate, here is the output of your current code and the issue in detail:

shallow obj1("hello"); creates an object obj1 with data pointing to a dynamically allocated string "hello".
shallow obj2 = obj1; creates another object obj2 using the shallow copy constructor, so obj2.data points to the same memory as obj1.data.
When the program ends, obj1 and obj2 will both call their destructors, and both will attempt to delete the same memory, causing a double deletion.*/

//Dangglingg Pointer :
/*Dangling Pointer Explanation
A dangling pointer is a pointer that continues to reference a memory location even after that memory has been deallocated. Dereferencing such a pointer leads to undefined behavior, which can include crashes, incorrect results, or corruption of data.*/