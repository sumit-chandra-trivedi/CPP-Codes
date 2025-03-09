#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "ENTER THE NUMER OF ROWS OF FIRST MATRIX " << endl;
    cin >> r1;
    cout << "ENTER THE NUMER OF COLUMNS OF FIRST MATRIX " << endl;
    cin >> c1;
    cout << "ENTER THE NUMER OF ROWS OF SECOND MATRIX " << endl;
    cin >> r2;
    cout << "ENTER THE NUMER OF COLUMNS OF SECOND MATRIX " << endl;
    cin >> c2;
    if (r1 != r2 || c1 != c2)
    {
        cout << "NOT IDENTICAL " << endl;
        return 0;
    }
    int a[r1][c1];
    int b[r2][c2];

    cout << "ENTER THE ELEMNTS OF FIRST MATRIX " << endl;
    for (int i = 0; i < r1; i++)
    {

        for (int j = 0; j < c1; j++)
        {

            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "ENTER THE ELEMNTS OF SECOND MATRIX " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < r1; i++)
    {
        int count =0;
        for (int j = 0; j < c1; j++)
        {
            
            if (a[i][j] != b[i][j])
            {
                count =1;
                break;
            }
        }
       if(count==1)
       {
           cout<<"NOT IDENTICAL"<<endl;
           break;
       }
       else
       {
           cout<<"IDENTICAL "<<endl;
       }
    }
    
}