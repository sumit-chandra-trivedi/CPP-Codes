#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack<int> &input, stack<int> &extra)
{
    stack<int> h;
    while (!input.empty())
    {
        extra.push(input.top());
        input.pop();
    }
    while (!extra.empty())
    {
        h.push(extra.top());
        extra.pop();
    }
    while (!h.empty())
    {
        input.push(h.top());
        h.pop();
    }
}
int main()
{
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++)
    {
        cin >> val;
        input.push(val);
    }
    //  while (!input.empty())
    // {
    //     cout << input.top() << " ";
    //     input.pop();
    // }
    // cout<<endl;

    reverseStack(input, extra);

    while (!input.empty())
    {
        cout << input.top() << " ";
        input.pop();
    }
}
