

#include <iostream>
#include <string>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string str;
    int count = 0;
    for(int i = input.size()-1;i>=0;i--)
    {
        // cout<<"hhi";
        int j =0;
        int k ;
        if(count == 0)
        {
            k = input.size()-1;
            // cout<<k<<endl;
        }
        if(input[i]==' ')
        {
            // cout<<i<<" ";
            j =i;
            string x = input.substr(j+1, k);
            str +=x ;
            str +=' ';
            k = j-1;
            cout<<str;
        }
        
        // if(i==0)
        // {
        //     string x = input.substr(0, k);
        //     str +=x ;

        // }
        
    }

    return str;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}