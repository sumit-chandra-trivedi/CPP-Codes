#include <iostream>

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        std::cout << head->value << std::endl;
        head = head->next;
    }
}

Node* middle(Node* head)
{
    if (!head) 
    {
        return nullptr;
    }
    Node* fast = head;
    Node* slow = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    } 

    return slow;
}


int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    // Node *third = new Node(3);
    // Node *fourth = new Node(4);
    // Node *fifth = new Node(5);
    // Node *sixth = new Node(6);
    head->next = second;
    // // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = NULL;
    Node* mid = middle(head);
    std::cout<<mid->value<<std::endl;
    print(head);
}
    