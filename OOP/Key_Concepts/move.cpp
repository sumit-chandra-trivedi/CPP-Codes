#include <iostream>
#include <cstring>

class MyClass{
private:
    int data;
    char *name;

public:

    MyClass() : data(0), name(nullptr) {}
    MyClass(int data,const char* name)
    {
         std::cout<<"Parameterized Construcor called"<<std::endl;
        this->data = data;
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    MyClass(const MyClass& other)
    {
        std::cout<<"Copy Construcor called"<<std::endl;
        data = other.data;
        if(other.name)
        {
            this->name = new char[strlen(other.name) + 1];
            strcpy(this->name, other.name);
        } else{
            name = nullptr;
        }
        
    }

    MyClass& operator=(const MyClass& other)
    {
        std::cout<<"Copy Assignment called"<<std::endl;
        if(this != &other)
        {
            data = other.data;
            delete []name;
            if(other.name)
            {
                this->name = new char[strlen(other.name) + 1];
                strcpy(this->name, other.name);
            } else{
                name = nullptr;
            }
            
        }

        return *this;
        
    }

    // Move Constructor
    MyClass(MyClass&& other) noexcept
    {
        std::cout<<"Move Construcor called"<<std::endl;
        data = other.data;
        name = other.name;
        other.name = nullptr; // Nullify the moved-from object
    }

    MyClass& operator=(MyClass&& other)
    {
        std::cout<<"Move Assignment called"<<std::endl;
        if(this != &other)
        {
            delete [] name;
            data = other.data;
            name = other.name;

            other.name = nullptr;
        }

        return *this;
    }

    // Display Function (for testing purposes)
    void display() const {
        std::cout << "Data: " << data << ", Name: " << (name ? name : "null") << std::endl;
    }

};

int main() {
    MyClass obj1(42, "Hello");
    obj1.display();

    MyClass obj2 = obj1; // Copy constructor
    obj2.display();

    MyClass obj3;
    obj3 = obj1; // Copy assignment
    obj3.display();

    MyClass obj(99, "World");

    //MyClass obj4 = MyClass(std::move(obj));
    MyClass obj4 = MyClass(99, "World"); // Move constructor
    obj4.display();

    obj4 = MyClass(100, "Move Assignment"); // Move assignment
    obj4.display();

    return 0;
}
