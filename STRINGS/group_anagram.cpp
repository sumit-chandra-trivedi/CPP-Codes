
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// vector<vector<string>> anagram(vector<string> arr)
// {
//     vector<vector<string>> res;

//     map <string, vector<string>> mymap;

//     for(int i = 0;i<arr.size();i++)
//     {
       
//         string temp1  = arr[i];
//         sort(temp1.begin(),temp1.end());
        

//         if(mymap.find(temp1) ==  mymap.end())
//         {
//             mymap[temp1].push_back(arr[i]);
//             for(int j = i + 1;j < arr.size(); j++)
//             {
//                 string temp2 = arr[j];
//                 sort(temp2.begin(),temp2.end());
//                 if(temp1 == temp2)
//                 {
//                     mymap[temp1].push_back(arr[j]);
//                 }
//             }
//         }
        
//     }

//     for (const auto& entry : mymap) {
//         res.push_back(entry.second);
//     }
    
//     return res;
// }
vector<vector<string>> anagram(vector<string> arr)
{
    vector<vector<string>> res;

    unordered_map <string, vector<string>> mymap;

    for(int i = 0;i<arr.size();i++)
    {
       
        string temp  = arr[i];
        sort(temp.begin(),temp.end());

        mymap[temp].push_back(arr[i]);  
        
    }

    for (const auto& entry : mymap) {
    
        cout<<endl;
        res.push_back(entry.second);
    }
    
    return res;
}

int main()
{
    vector<string> arr = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> res = anagram(arr);
    
    for(auto it : res)
    {
        //cout<<"hello";
        for(auto it1 : it)
        {
            cout<<it1<<" ";
        }
    }

    return 0;
}