#include <iostream>
#include<climits>
using namespace std;
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    //return the number of elements present in my stack.
    int size(){
        return nextIndex;
    }
    bool IsEmpty()
    {
        if(nextIndex == 0)
        {
            return true;
        }
        else{
            return false;
        }
       // return nextIndex==0; Only this line can be written instead of if else statement.
    }
    //Insert Element.
    void push(int element)
    {
        if(nextIndex == capacity)
        {
            int *newdata = new int[2*capacity];
            for(int i = 0;i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            capacity*=2;
            delete[] data;
            data = newdata;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    //Delete Element.
    int pop()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main()
{
    StackUsingArray s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(1000000);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

}