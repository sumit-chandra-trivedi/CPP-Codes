#include <iostream>
using namespace std;

class MyClass{
private:
    int data;
    char* name;

public:
    MyClass() : data(0), name(nullptr){}

    Myclass(int data, char* name)
    {
        this->data = data;
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    MyClass(const MyClass& other)
    {
        data = other.data;
        name = new char[strlen(other.name)+1];
        strcpy(name, other.name);
    }

    MyClass& operator=(const MyClass& other)
    {
        if(this != &other)
        {
            data = other.data;
            delete[] name;
            name = new char[strlen(other.name)+1];
            strcpy(name,other.name);
        }

        return *this;
    }

    MyClass(MyClass&& other) noexcept{
        data = other.data;
        name = other.name;
        other.name = nullptr;
    }

    MyClass& operator=(MyClass&& other)
    {
        if(this != &other)
        {
            delete[] name;
            data = other.data;
            name = other.name;

            other.name = nullptr;
        }

        return *this;
    }
};