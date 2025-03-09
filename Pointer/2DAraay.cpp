#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int** arr = new int* [n];

    for(int i=0;i<n;i++)
    {
        arr[i] = new int[2];
        for(int j= 0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i =0;i<n;i++)
    {
        for(int j= 0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    for(int i = 0;i<n;i++)
    {
        for(int j= 0;j<2;j++)
        {
            delete [] arr[i];
        }
    }

    delete [] arr;
}