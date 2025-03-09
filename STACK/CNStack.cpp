#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int>s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(100000);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size();

}