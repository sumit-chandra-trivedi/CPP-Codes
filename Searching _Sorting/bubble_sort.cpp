#include <iostream>
#include <vector>
std::vector<int> bubble_sort(const std::vector<int> &array)
{
    std::vector<int> result = array;
    for(int i = 0;i < result.size();i++)
    {
        for(int j = 0;j < result.size()- i -1;j++)
        {
            if(result[j] > result[j+1] )
                std::swap(result[j], result[j+1]);
        }

    }

    return result;
}

int main()
{
    std::vector<int> v = {4,7,9,1,3};
    std::vector<int> v1 = bubble_sort(v); 

    for(int it : v1)
    {
        std::cout<<it<<" ";
    }
}