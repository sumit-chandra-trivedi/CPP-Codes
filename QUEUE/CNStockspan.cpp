#include <iostream>
using namespace std;
int *stockSpan(int *price, int size)
{
    int *arr=new int[size];
    for(int i=size-1;i>=0;i--)
    {
        int count=1;
        for(int j=i-1;j>=0;j--)
        {
            if(price[j]<price[i])
            {
                count++;
            }
            else 
            {
                break;
            }
        }
        arr[i]=count;
    }
    return arr;
}
int main()
{
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}