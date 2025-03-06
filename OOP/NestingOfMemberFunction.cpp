#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class binary
{
    string s;
    
    void chk_bin();//--> even if this function is private it will be executed because its nested in a public function.

    public:
    void read();
    
    void ones();
    void print();


};
void binary::read()
{
    cout<<"Enter The String "<<endl;
    cin>>s;

}
void binary ::chk_bin()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary Number"<<endl;
            return;
        }
        
    }
    cout<<"Correct Binary Number"<<endl;
}
void binary ::ones()
{   chk_bin();//--->This Is Nesting Where We Are Using Function Inside Function.
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
           s.at(i)='1';
        
        }
        else 
        {
           
            {
                s.at(i)='0';
            }
            
        }
        
    }
}
void binary ::print()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b1;
    b1.read();
    //b1.chk_bin();----->If We Are Using The Concept Of Nesting Then We Dont Need To Paas This Function In main.
    b1.ones();
    b1.print();

}
//If we make a function private then we cannot call it speciffically in main
// but a nested function will be executed even if it is private.