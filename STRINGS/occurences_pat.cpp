#include<iostream>
#include<string>
using namespace std;

int main(){

    string str ,pat;
    cin>>str>>pat;
    for(int i = 0;i<=str.size()-pat.size();i++)
    {
        string res = str.substr(i, pat.size());

        if (res == pat)
        {
            cout << i << " ";
        }
            
    }
        

}