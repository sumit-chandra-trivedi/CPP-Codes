#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}
Node* InsertAtTheHead(Node *head, int newvalue)
{

    Node *newnode = new Node();
    newnode->value = newvalue;
    newnode->next = head; // newnode->next = ptr; can't be written here bcs ptr will be apoiinter to poiinter whiich cant be eqauted to a pointer next.
    head = newnode;
    return head;
}
Node* InsertAtIndex(Node*head,int newvalue,int index)
{
    Node*newnode=new Node();
    Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    newnode->next=p->next;
    newnode->value=newvalue;
    p->next=newnode;
    return head;

}
Node* InsertAtLast(Node*head,int newvalue)
{
    Node*newnode=new Node();
    newnode->value=newvalue;
    newnode->next=NULL;
    Node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newnode;
    return head;

}
Node* DeleteFirst(Node*head)
{
  Node*p=head;
  head=head->next;
  delete p;
  return head;
}
Node* DeleteAtIndex(Node* head,int index)
{
    Node*p;
    Node* q;
    p=head;
    q=head->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    delete q;
    return head;

}
Node* DeleteAtLast(Node* head)
{
    Node*p;
    Node* q;
    p=head;
    q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    
    p->next=NULL;
    delete q;
    return head;

}
Node* DeleteAtKey(Node*head,int key)
{
    
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = fourth;
    fourth->value = 4;
    fourth->next = NULL;
    // head = InsertAtTheHead(head,0);
    // InsertAtTheLast(head, 5);
    // head=InsertAtIndex(head,50,2);
    //  head=DeleteFirst(head);
    //  head=DeleteAtIndex(head,2);
    // InsertAtLast(head,6);
    head=DeleteAtLast(head);

    print(head);
}