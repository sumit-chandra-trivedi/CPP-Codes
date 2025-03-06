#include <iostream>
using namespace std;
class Polynomial
{
    int *degCoeff;
    int capacity;
    int nextindex;

public:
    Polynomial()
    {
        degCoeff = new int[5];
        nextindex = 0;
        capacity = 5;
    }
    void add(int element)
    {
        if (nextindex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = degCoeff[i];
            }
            delete[] degCoeff;
            degCoeff = newdata;
            capacity *= 2;
        }
        degCoeff[nextindex] = element;
        nextindex++;
    }
};
