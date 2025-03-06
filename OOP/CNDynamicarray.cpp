#include<iostream>
using namespace std;

template<typename T>
class DynamicArray
{
  T *data;
  int nextindex;
  int capacity;
  public:
  DynamicArray(int size)
  {
      data = new T[size];
      nextindex = 0;
      capacity = size;
  }
  DynamicArray()
  {
      data = new T[5];
      nextindex = 0;
      capacity = 5;
  }
  void add(T element)
  {
      if(nextindex == capacity)
      {
          T *newdata=new T[2*capacity];
          for(int i=0;i<capacity;i++)
          {
              newdata[i]=data[i];
          }
          delete []data;
          data = newdata;
          capacity*=2;
      }
      data[nextindex] = element;
      nextindex++;
  }
  void print()
  {
      for (int i = 0; i < nextindex; i++)
      {
          cout<<data[i]<<" ";
      }
      cout<<endl;
      
  }

};

int main()
{
    DynamicArray<char> d1(5);
    d1.add('a');
    d1.add('b');
    d1.add('c');
    d1.add('d');
    d1.add('e');

    d1.print();

    DynamicArray<char> d2;
    d2.add('a');
    d2.add('b');
    d2.add('c');
    d2.add('d');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
    d2.add('e');
   
    d2.print();



}