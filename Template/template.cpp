#include <iostream>
using namespace std;

template <typename T>
class Vector{
    public:
    T* arr;
    int size;

    Vector(int m) : size(m),arr(new T[size]){}

    T dotProduct(Vector const &v)
    {
        T d = 0;
        for(int i = 0;i<size;i++)
        d += this->arr[i]*v.arr[i];

        return d;
    }

    

};

int main()
{
    Vector <double> v1(3);
    v1.arr[0] = 1.5;
    v1.arr[1] = 0;
    v1.arr[2] = 3;
    Vector <double> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 3;
    double val = v1.dotProduct(v2);
    cout<<val;
}