#include <iostream>
#include <string>
#include <sstream>
#include <set>



void remv_dup(std::string& str)
{
    
    std::string res ="";
    std::set<char> seen;

        for(int i = 0;i<str.size();i++)
        {
            if(seen.find(str[i]) == seen.end())
            {
            
                res+= str[i];
                seen.insert(str[i]);

            }

        }
        


    str = res;
}

int main()
{
    std::string str;
    std::getline(std::cin,str);
    remv_dup(str);
    std::cout<<str;

}
