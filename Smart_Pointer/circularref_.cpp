
#include <iostream>
#include <memory>
struct Node{
    int data;
    std::shared_ptr<Node> next;
    std::shared_ptr<Node> prev; //==>Fix std::weak_ptr<Node> prev;

    Node(int value) : data(value){}
};

int main()
{
    std::shared_ptr<Node> node1 = std::make_shared<Node>(1);
    std::shared_ptr<Node> node2 = std::make_shared<Node>(2);

    node1->next = node2;
    node2->prev = node1;

}