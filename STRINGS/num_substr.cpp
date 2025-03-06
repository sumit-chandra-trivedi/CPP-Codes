#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int numOfStrings(vector<string>& patterns, string word) {

    int count = 0;

    for(int j = 0; j < patterns.size(); j++)
    {
        size_t pos = word.find(patterns[j]);
        if(pos != string::npos)
        {
            count++;
        }
    }
    return count;
 
}

//Iterative approach
    int numOfStrings(vector<string>& patterns, string word) {

        int count = 0;
        string str;

        for(int i = 0;i < patterns.size();i++)
        {
            for(int j = 0;j < word.size();j++)
            {
                if(word[j] == patterns[i][0])
                {
                    str = word.substr(j,patterns[i].size());
                    if(str == patterns[i])
                    {
                        count++;
                        str = "";
                        break;
                    }
                    
                }
                
            }
        }
        return count;
    }

int main()
{
    vector<string> patterns = {"nmksysm","gwjt","vjwxinx","wj","yspxxcv","tpeud","sv","sztjxnrb","smsv","vj","pj","tsmsvj","e","svj","w","vj","awofrm","rshgiiyi","v"};
    string word ="ygwjtsmsvj";
    cout<<numOfStrings(patterns,word);
}