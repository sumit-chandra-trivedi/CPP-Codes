#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};
void print(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}
void PrintUsingRecursion(Node*head){
    if(head==NULL){
        return;
    }
    cout<<head->value<<endl;
    PrintUsingRecursion(head->next);
}
void InsertAtTheHead(Node **head, int newvalue)
{

    Node *newnode = new Node();
    newnode->value = newvalue;
    newnode->next = *head; //newnode->next = ptr; can't be written here bcs ptr will be apoiinter to poiinter whiich cant be eqauted to a pointer next.
    *head = newnode;
}
Node *InsertAtTheHead(Node *head, int newvalue)
{

    Node *newnode = new Node();
    newnode->value = newvalue;
    newnode->next = head;
    head = newnode;
    return head;
}

void InsertAtTheLast(Node **head, int Newvalue)
{

    Node *lastnode = new Node();
    lastnode->value = Newvalue;
    lastnode->next = NULL;
    Node*ptr=(*head);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;

    }
    ptr->next=lastnode;
   
    
}
void DeleteFirst(Node **head)
{

    Node *ptr = *head;
    *head = (*head)->next; //*head=*head->next expression is wrong why ?
    delete ptr;
}
void DeleteAtIndex(Node **head, int index)
{
    Node *p = *head;
    Node *q = (*head)->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete q;
}
void DeleteAtLast(Node **head)
{
    Node *p = *head;
    Node *q = (*head)->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
}
void DeleteAtKey(Node **head, int key)
{
    Node *p = *head;
    Node *q = (*head)->next;

    while (q->value != key && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->value == key)
    {
        p->next = q->next;
        delete q;
    }
    else
    {
        cout << "key doesnt exists";
    }
}
void ReverseLinkedList(Node **head)
{
    Node *current, *next, *prev;
    current = *head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    // return head;
}
void PrintReverseUsingRecursion(Node *p)
{
    if (p == NULL)
    {
        return;
    }
    PrintReverseUsingRecursion(p->next);
    cout<< p->value<<endl;
    
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


    // head=InsertAtTheHead(head,0);
    // InsertAtTheHead(&head, 0);
    InsertAtTheLast(&head, 5);
    // DeleteFirst(&head);
    // DeleteAtIndex(&head, 2);
    // DeleteAtLast(&head);
    // DeleteAtKey(&head,3);
    // ReverseLinkedList(&head);
    // PrintReverseUsingRecursion(head);
    print(head);
    // PrintUsingRecursion(head);
}
