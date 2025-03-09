#include <iostream>
#include <climits>
using namespace std;
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    // return the number of elements present in my stack.
    int size()
    {
        return nextIndex;
    }
    bool IsEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        // return nextIndex==0; Only this line can be written instead of if else statement.
    }
    // Insert Element.
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    // Delete Element.
    int pop()
    {
        if (IsEmpty())
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if (IsEmpty())
        {
            cout << "stack is empty";
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};

int main()
{
    StackUsingArray s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}