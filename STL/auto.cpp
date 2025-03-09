#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> v(3 ,'s');
    for(auto elem : v) cout<<elem<<" "; // The use of auto here makes thhe process very simple.
    vector<char> :: iterator it = v.begin();
    cout<<endl;
    for(;it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}