#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int countBracketReversals(string input)
{
    if (input.length() % 2 != 0)
    {
        return -1;
    }
    stack<int> s;
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == '{')
        {
            s.push(input[i]);
        }
        else if (input[i] == '}' && s.empty())
        {
            s.push(input[i]);
        }
        else if (input[i] == '}' && s.top() == '{')
        {
            s.pop();
        }
        else if (input[i] == '}' && s.top() != '{')
        {
            s.push(input[i]);
        }
        i++;
    }
    if(s.empty())
    {
        return 0; 
    }

    int count = 0;
    while (!s.empty())

    {

        char c1, c2;
        c1 = s.top();
        s.pop();
        c2 = s.top();
        s.pop();

        if (c1==c2)
        {
            count++;
        }
        else if(c1!=c2)
        {
            count=count+2;
        }
    }
    return count;
}
int main()
{
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}