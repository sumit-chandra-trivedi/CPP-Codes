#include<iostream>
using namespace std;
#include<stack>
bool isBalanced(string expression) 
{
    stack<char>s;
    int i=0;
    while(expression[i]!='\0')
    { 
        if(expression[i]=='(')
        {
            s.push(expression[i]);
        }
        else if(expression[i]==')')
        {
            if(s.empty())
            {
                return false;
            }
            s.pop();
        }
        
        i++;
    }
   return s.empty();
}
int main()
{
    string input;
    cin>>input;
    cout<<((isBalanced(input))? "true" : "false");
}