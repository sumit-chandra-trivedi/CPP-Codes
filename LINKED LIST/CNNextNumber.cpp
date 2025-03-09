#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *NextLargeNumber(Node *head)
{
     if(head->next==NULL)
    {
      head->data=head->data+1;
      return head;
    }
    Node *temp = head;
    Node *temp1 = head;
    while (temp->next != NULL)
    {
        if (temp == head)
        {
            temp = temp->next;
        }
        else
        {
            temp1 = temp;
            temp = temp->next;
        }
    }
    if (temp->data != 9)
    {
        int lastval = temp->data + 1;
        Node *newnode = new Node(lastval);
        temp1->next = newnode;
    }
    return head;
    // else if (temp->data == 9)
    // {
    // }
}

int main()
{
    Node *head = takeinput();

    head = NextLargeNumber(head);
    print(head);
    return 0;
}
