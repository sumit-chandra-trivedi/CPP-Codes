#include <iostream>
#include <stack>
using namespace std;
bool checkRedundantBrackets(string expression)
{
    stack<int> s;
    int i=0;
    while(expression[i]!='\0')
    {
        if(expression[i]!=')')
        {
          s.push(expression[i]);
        }
        else if(expression[i]==')')
        {
            int count=0;
            while(s.top()!='(')
            {
                s.pop();
                count++;
            }
        
             if(count==0)
            {
                return true;
            }
            else{
                s.pop();
            }
        }
        i++;
       
       
    }
    return !s.empty();
}
int main()
{
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}