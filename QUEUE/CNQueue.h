#include<iostream>
using namespace std;
template<typename T>
class QueueUsingArray
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:

    QueueUsingArray()
    {
        data=new T[4];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=4;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void enqueue(T elment)
    {
        if(size==capacity)
        {
            T *newdata=new T[2*capacity];
            int j=0;
            for(int i=firstIndex;i<capacity;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            delete[]data;
            data=newdata;
            firstIndex=0;
            nextIndex=capacity;
            capacity=2*capacity;
            
        }
        data[nextIndex]=elment;
        nextIndex=(nextIndex+1)%capacity;
        size++;
        if(firstIndex==-1)
        {
            firstIndex=0;
        }
       
    }
    T front()   
    {
        if(isEmpty())
        {
            cout<<"Queue is empty !"<<endl;
            return 0;
        }
        T ans=data[firstIndex];
        return ans;
    }
    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Is Empty"<<endl;
            return 0;
        }
        T ans=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0)
        {
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }
};