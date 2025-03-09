#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
int highestFrequency(int a[], int n)
{
    unordered_map<int, bool> exists;
    int max_count =1;
    for (int i = 0; i < n; i++)
    {
        if (exists.count(a[i]) > 0)
        {
            count++;
        }
        exists[a[i]] = true;
      
    }
}