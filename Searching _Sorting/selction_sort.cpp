#include <iostream>
#include <vector>
//#include <algorithm>

std::vector<int> Selection_sort(const std::vector<int> &array)
{
    std::vector<int> result = array;
    for(int i = 0;i < result.size() - 1;i++)
    {
        int min_idx = i;

        for(int j = i+1;j < result.size();j++)
        {
            if(result[min_idx] > result[j])
                min_idx = j;
        }

        std::swap(result[i], result[min_idx]);
    }

    return result;
}


int main()
{
    std::vector<int> v = {4,7,9,1,3};
    //Selection_sort(v);
    std::vector<int> v1 = Selection_sort(v);

    for(int it : v1)
    {
        std::cout<<it<<" ";
    }
}