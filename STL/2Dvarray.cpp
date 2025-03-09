#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r ,c;
    cin>>r>>c;
    //Wrong approach
    //vector<int> ar[r]; In C++, the length of an array must be a compile-time constant. The expression ar[r] tries to create an array of vectors with size r, but r is only known at runtime. This is known as a "variable-length array" (VLA), which is not part of the C++ standard (though some compilers may allow it as an extension).
    
    vector<vector<int>> ar(r);//This means that this a vector withh 'r' rows and the size of all the vectors are zero at this point.

    for(int i=0;i<r;i++)
    {
        ar[i].resize(c); // Here we make the size of the 'r' vectors as 'c'.
    }

    for(int i = 0;i<r;i++) 
    {
        for(int j = 0;j<c;j++)
        {
            cin>>ar[i][j];
        }
        
    }

    for(int i = 0;i<r;i++) 
    {
        for(int j = 0;j<c;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<r;i++)
    {
        int sum = 0;
        for(int j = 0;j<c;j++)
        {
            sum = sum  + ar[i][j];
        }

        cout<<sum<<" ";
    }





    


}
