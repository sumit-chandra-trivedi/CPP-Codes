#include <iostream>
using namespace std;
#include <queue>
#include<stack>
void reverseQueue(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
int main()
{
    queue<int> q;
    int size, element;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        q.push(element);
    }
    reverseQueue(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
