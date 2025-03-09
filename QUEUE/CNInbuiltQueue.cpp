#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<int> q;
    q.push(100);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    cout<<q.front();
    q.emplace();
    cout<<q.front();
}