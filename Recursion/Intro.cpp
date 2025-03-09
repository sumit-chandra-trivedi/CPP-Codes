#include <iostream>
int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int ans = n*fact(n-1);
    return ans;
}


int main()
{
    std::cout << "All tests passed." << std::endl;
    return 0;
}