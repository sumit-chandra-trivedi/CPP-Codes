#include <iostream>
#include <string>
#include <stack>
//using namespace std;

bool IsBalanced(std::string expr)
{
    std::stack<char> s;
    for(int i = 0;i < expr.size(); i++)
    {
        if(expr[i] =='(')
        {
            s.push(expr[i]);
        }
        else if(expr[i] == ')')
        {
            if(s.empty())
            {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    std::string expr;
    std::cin>>expr;
    std::cout<<((IsBalanced(expr)) ? "true" : "false");
}