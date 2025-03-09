#include <iostream>
#include <vector>

void merge(std::vector<int> &array,int left,int right,int mid )
{
    int size1 = mid -left +1;
    int size2 = right -mid;
    
    std::vector<int> arr1(size1), arr2(size2);

    for (int i = 0; i < size1; i++)
        arr1[i] = array[left + i];
    for (int j = 0; j < size2; j++)
        arr2[j] = array[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            array[k++] = arr1[i++];
        } else{
            array[k++] = arr2[j++];
        }
    }

    while(i<size1){array[k++] = arr1[i++];}
    while(j<size2){array[k++] = arr2[j++];}

    //array = ans;
}

void merge_sort(std::vector<int> &array,int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;
        merge_sort(array,left,mid);
        merge_sort(array,mid+1,right);

        merge(array,left,right,mid);
    }
}

int main()
{
    std::vector<int> v = {4,7,9,1,3};
    merge_sort(v,0,v.size() - 1); 

    for(int it : v)
    {
        std::cout<<it<<" ";
    }
}