#include <iostream>
#include <vector>

std::vector <int> insertion_sort(std::vector <int> & array)
{
    std::vector <int> result = array;
    
    for(int i = 1;i < result.size();i++)
    {
        int key = result[i];
        int j = i -1;

        while(j>=0 && key < result[j])
        {
            result[j+1] = result[j];
            j--;
        }

        result[j+1] = key;
    }

    return result;
}

int main()
{
    std::vector<int> v = {4,7,9,1,3};
    std::vector<int> v1 = insertion_sort(v); 

    for(int it : v1)
    {
        std::cout<<it<<" ";
    }
}