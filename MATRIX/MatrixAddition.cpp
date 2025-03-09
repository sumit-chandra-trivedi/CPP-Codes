#include <iostream>
using namespace std;
int main()
{

    int n;
    
    cout<<"ENTER THE ORDER OF THE MATRIX ";
    cin>>n;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    cout<<"ENTER THE ELEMENTS OF FIRST MATRIX "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"ENTER THE ELEMENTS OF SECOND MATRIX "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    // ADDITIONAL PROGRAM TO FIND SUM OF TWO MATRICES.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    
}