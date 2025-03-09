#include <iostream>
#include<climits>

using namespace std;
template<typename T>
class StackUsingArray
{
    T *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray()
    {
        data=new T[4];
        nextIndex=0;
        capacity=4;
    }
    //return the number of elements present in my stack.
    int size(){
        return nextIndex;
    }
    bool IsEmpty()
    {
        if(nextIndex==0)
        {
            return true;
        }
        else{
            return false;
        }
       // return nextIndex==0; Only this line can be written instead of if else statement.
    }
    //Insert Element.
    void push(T element)
    {
        if(nextIndex==capacity)
        {
            T *newdata=new T[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity*=2;
            delete[] data;
            data=newdata;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    //Delete Element.
    T pop()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty";
            return 0;
        }
        return data[nextIndex-1];
    }
};

int main()
{
    StackUsingArray<int> s;
    s.push(100);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    s.push(107);
    s.push(108);
    s.push(109);
    s.push(110);
    s.push(111);
    
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.IsEmpty();

}