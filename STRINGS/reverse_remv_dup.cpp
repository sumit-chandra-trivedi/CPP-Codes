#include <iostream>
#include <cstring>
#include <set>
using namespace std;

#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <set>
using namespace std;

string reverse(string str)
{
    string result ="";
    set<char> unique;
    for(int i = str.size()-1;i>=0;i--)
    {
      if(unique.find(str[i]) == unique.end())
      {
          unique.insert(str[i]);
          result+=str[i];
      }
    }
  
  return result;
}


int main()
{
    //Write your code here
    string str;
    getline(cin,str);
    string rev_str=reverse(str);
    cout<<rev_str<<endl;

    
}