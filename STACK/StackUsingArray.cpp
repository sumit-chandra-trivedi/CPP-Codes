#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *x;
};
int IsEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Push(stack*ptr,int value)
{
    if(IsFull(ptr))
    {
        cout<<"Stack OverFlow! Cannot Push "<<value<<" to the stack"<<endl;
    }
    else
    {
      ptr->top++;
      ptr->x[ptr->top]=value;
    }
}
int pop(stack*ptr)
{
    if(IsEmpty(ptr))
    {
        cout<<"Cannot Pop As Stack Is Empty"<<endl;
    }
    else
    {
        int value =ptr->x[ptr->top] ;
        ptr->top--;
        return value;
    }
}
int main()
{
    stack *sp = new stack();
    sp->size = 10;
    sp->top = -1;
    sp->x  = new int(sp->size * sizeof(int));
    Push(sp,1);
    Push(sp,2);
    Push(sp,3);
    Push(sp,4);
    Push(sp,5);
    Push(sp,6);
    Push(sp,7);
    Push(sp,8);
    Push(sp,9);
    Push(sp,10);
   
    cout<< pop(sp)<<" Has Been Popped From The Stack "<<endl;
    cout<< pop(sp)<<" Has Been Popped From The Stack "<<endl;
    cout<< pop(sp)<<" Has Been Popped From The Stack "<<endl;
    cout<< pop(sp)<<" Has Been Popped From The Stack "<<endl;
  
   
    
    cout << IsEmpty(sp) << endl;
    cout << IsFull(sp);
}