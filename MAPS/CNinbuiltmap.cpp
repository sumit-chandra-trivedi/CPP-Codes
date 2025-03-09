#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,int>ourmap;
    pair<string,int>p("abc",1);
    ourmap.insert(p);
    ourmap["def"]=100;
    cout<<"size :"<<ourmap.size()<<endl;
    cout<<ourmap["abc"]<<endl;//while using square bracket we should be cautiuos that the value exists otherwise it will add 0.
    cout<<ourmap.at("abc")<<endl;
    cout<<ourmap.at("def")<<endl;
    cout<<ourmap["ghi"]<<endl;
    cout<<"size :"<<ourmap.size()<<endl;
    ourmap.erase("def");
    cout<<"size :"<<ourmap.size()<<endl;
    // check presence.
    cout<<ourmap.count("abc")<<endl;
    if(ourmap.count("abc")>0)
    {
        cout<<"key exists "<<endl;
    }
}
