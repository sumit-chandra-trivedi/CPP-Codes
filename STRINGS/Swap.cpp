#include<iostream>

using namespace std;
int main()
{
    const char *str1="sumit";
    const char *str2="trivedi";
    const char* temp;
    temp=str1;
    str1=str2;
    str2=temp;
    cout<<str1<<" ";
    cout<<str2<<endl;
    string s1="SUMIT";
    string s2="TRIVEDI";
    string temp1;
    temp1=s1;
    s1=s2;
    s2=temp;
    swap(s1,s2);
    cout<<s1<<" ";
    cout<<s2;


}