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
    if (c1 != r2)
    {
        cout << "MULTIPLICATION NOT POSSIBLE "<<endl;
        return 0;
    }
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];
    cout << "ENTER THE ELEMENTS OF FIRST MATRIX " << endl;
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
    cout << "THE RESULTANT MATRIIX IS " << endl;
    for (int i = 0; i < r1; i++)
    {

        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < r2; k++)
            {

                sum = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
