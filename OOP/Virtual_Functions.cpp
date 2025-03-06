#include <iostream>
#define SIZE 3
using namespace std;

class BaseClass
{
public:
  int var_base=100;
 virtual void display()
  {
    cout << "1 Displaying base class variable " << var_base << endl;
  }

  virtual ~BaseClass()
  {
    cout<<"Base Destructor called "<<endl;
  }
};
class DerivedClass : public BaseClass
{
  public:
  int var_derived = 150;
  void display() override
  {
    cout << "2 displaying base class variable " << var_base<<endl;
    cout << "2 displaying derived class variable " << var_derived<<endl;

  }

  ~DerivedClass()
  {
    cout<<"Derived Destructor called "<<endl;
  }
};

int main()
{
  // BaseClass* base_class_pointer = new DerivedClass();
  BaseClass* base_class_pointer;
  // BaseClass obj_base;
  // base_class_pointer = &obj_base;
  DerivedClass obj_derived;
  obj_derived.display();
  base_class_pointer = &obj_derived;
  // base_class_pointer->var_base=50;
 
  //base_class_pointer->var_derived=150;//--->>This will throw an error.
  base_class_pointer->display();
  delete base_class_pointer;
  // base_class_pointer->display();
  // DerivedClass* derived_class_pointer;
  // derived_class_pointer->var_base=150;
  // derived_class_pointer->var_derived=120;
  // derived_class_pointer->display();
  

}