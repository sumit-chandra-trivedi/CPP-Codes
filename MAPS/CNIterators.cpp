#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
int main()
{
    unordered_map<string,int>map;
    map["abc"] = 1;
    map["abc1"] = 10;
    map["abc2"] = 100;
    map["abc3"] = 1000;
    map["abc4"] = 10000;
    map["abc5"] = 100000;
    unordered_map<string,int>::iterator it = map.begin();
    while(it != map.end())
    {
        cout<<"key : "<<it->first<<" element : "<<it->second<<endl;
        it++;
    }
    vector<int>list;
    list.push_back(1);
    list.push_back(10);
    list.push_back(100);
    list.push_back(1000);
    list.push_back(10000);
    vector<int>::iterator it1 = list.begin();
    while(it1 != list.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
}