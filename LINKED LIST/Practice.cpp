#include <iostream>
using namespace std;
//#include "node.cpp";

class Node{
    public:
    int data;
    Node* Next;
    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }
};

Node * TakeInput()
{
    int data;
    cout<<"Enter the Data";
    cin>>data;
    Node *Head = NULL;
    Node *Tail = NULL;
    while(data != -1)
    {
        Node *newnode = new Node(data);
        if(Head == NULL)
        {
            Head = newnode;
            Tail = newnode;
        }

        else
        {
            Tail->Next = newnode;
            Tail = newnode;
        }

        cin>>data;
    }
    return Head;
}

void printIthNode(Node *head, int i)
{
    //Write your code here
	Node *temp = head;
	int count = 0;
	while(i != count)
	{
		count ++;
		temp = temp->Next;
	}
	cout<<temp->data;
}

void insert(Node *Head, int i)
{
   Node *temp = Head;
   int count = 0;
   while( i > count)
   {
        count++;
        temp = temp->Next;
   }

}

void print(Node * Head)
{
    Node *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }   
}
int main()
{
    Node *Head = TakeInput();
    print(Head);
    printIthNode(Head,3);
    
}
