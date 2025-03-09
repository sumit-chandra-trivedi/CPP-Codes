#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *Next;

    Node(int data)
    {
        this->data=data;
        this->Next=NULL;
    }

};