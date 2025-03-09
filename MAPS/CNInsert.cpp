#include <iostream>
#include <vector>
#include <string>
using namespace std;
template <typename v>
class MapNode
{
    string key;
    v value;
    MapNode *next;
    MapNode(string key, v value)
    {
        this->key = key;
        this->value = value;
    }
    ~MapNode()
    {
        delete next;
    }
};
template <typename v>
class ourmap
{
    MapNode<v> **Buckets;
    int count=0;
    int numbuckets=5;

public:
    ourmap()
    {
        Buckets = new MapNode<v>[numbuckets];
        for (int i = 0; i < size; i++)
        {
            buckets[i] = NULL;
        }
    }
    ~ourmap()
    {
        delete buckets[i];
    }
    delete [] buckets;
    int size()
    {
        return count;
    }
    void insert(string key ,v value)
    {

    }
   v getValue(string key)
   {

   }
   v remove(string key)
};