#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
// vector <int> removeduplicates(int* a, int size)
// {
//     vector <int> output;
//     unordered_map <int, bool> exists; //std::unordered_map provides average constant time complexity, O(1), for insertions, deletions, and lookups. This is because it uses a hash table internally.
//                                         std::map, on the other hand, provides logarithmic time complexity, O(log n), for insertions, deletions, and lookups. This is because it uses a balanced binary search tree (typically a Red-Black tree) internally.
//     for(int i=0;i<size;i++)
//     {
//         if(exists.count(a[i]) > 0)
//         {
//             continue;
//         }
//         exists[a[i]] = true;
//         output.push_back(a[i]);
//     }
//     return output;
// }
// vector <int> removeduplicates(int* a, int size)
// {
//     vector <int> output;
//     unordered_set <int> exists; //std::set provides logarithmic time complexity, O(log n), for insertions and lookups.
//                                 //std::unordered_map provides average constant time complexity, O(1), for insertions and lookups.
//     for(int i = 0;i < size; i++)
//     {
//         if(exists.find(a[i]) != exists.end())
//         {
//             continue;
//         }
//         exists.insert(a[i]);
//         output.push_back(a[i]);
//     }
//     return output;
// }
vector<int> removeduplicates(int* a, int size) {
    vector<int> output;
    int i = 1;
    for (int j = 0; j < size; j++) {
        
        if (a[j] != a[i-1]) {
            output.push_back(a[j]);
            i = j;
        }
    }
    return output;
}
int main()
{
    int a[] = {1,2,2,3,6,5,5,8,7,7,3};
 
    vector <int> output = removeduplicates(a,11); 
    for(int i = 0;i < output.size(); i++)
    {
        cout<<output[i]<<endl;
    }
}
