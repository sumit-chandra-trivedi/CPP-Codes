#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

using namespace std;

string remv_cons(string str)
{
    
    string res;
    std::unordered_set<char> charSet;
    int start = 0;
    

    for(int end = 0; end < str.size(); ++end)
    {
        while(charSet.find(str[end]) != charSet.end())
        {
            charSet.erase(str[start]);
            ++start;
        }
        charSet.insert(str[end]);

        if(end -start +1 > res.size())
        {
            res = str.substr(start,end -start +1);
        }
    }
    return res;
}
int main()
{
    string str = "abcabcbdeffg";//abcabbbcdfabfg
    string res = remv_cons(str);
    cout<<res;

    return 0;
}