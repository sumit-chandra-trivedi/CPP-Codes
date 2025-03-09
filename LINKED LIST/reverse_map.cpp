#include <iostream>
#include <cstring>
#include <unordered_map>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

 Node* reversell(Node* head)
 {
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    unordered_map<int,vector<Node*>> m;
    Node* temp = head;
    Node* initialHead = head;
    while(temp)
    {
        m[temp->data].push_back(temp);
        m[temp->data].push_back(temp->next);
        temp = temp->next;
    }

    for(const auto &map : m)
    {
        if(map.second[1] == nullptr)
        {
            head = map.second[0];
        }
    }

    auto it = m.find(m.second[1] == nullptr);
    head = it->second[0];

    Node* temp1 = head;

    while(temp1 != initialHead)
    {
        for(const auto &map : m)
        {
            if(map.second[1] == temp1)
            {
                temp1->next = map.second[0];
                temp1 = map.second[0];
                break;
            }
        }
        
    }

    temp1->next = nullptr;
    return head;


 }

 void print(Node* head)
 {
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
 }

int main() {
    
    Node * firstNode = new Node(1);
    Node * secondNode = new Node(2);
    Node * thirdNode = new Node(3);
    Node * fourthnode = new Node(4);

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthnode;

    cout<<"\nOriginal Linked List\n";
    print(firstNode);
    Node* head = reversell(firstNode);
    if(head)
    {
        cout<<"\nLinked list after reversal\n";
        print(head);
    }
    else{
        cout<<"The head is NULL !!";
    }
    
    return 0;
}
