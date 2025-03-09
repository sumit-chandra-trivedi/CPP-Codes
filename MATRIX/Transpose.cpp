#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r1, c1;
    cout << "ENTER THE NUMER OF ROWS OF FIRST MATRIX " << endl;
    cin >> r1;
    cout << "ENTER THE NUMER OF COLUMNS OF FIRST MATRIX " << endl;
    cin >> c1;
 
    int a[r1][c1];
    int b[c1][r1];

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

    cout << "TRANSPOSE OF THE GIVEN MATRIX IS " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            b[j][i]=a[i][j];
        }
    }

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
}