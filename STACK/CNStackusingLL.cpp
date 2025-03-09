#include <iostream>
using namespace std;
// template <typename T>
// class Node
// {
//     public:
//     T data;
//     Node<T> *next;
//     Node(T data)
//     {
//         this->data = data;
//         next = NULL;
//     }
//    T getData()
//    {
//        return data;
//    }
// }; 
// template <typename T>
// class Stack
// {
//     Node<T> *head;
//     int size;

// public:
//     Stack()
//     {
//         head = NULL;
//         size = 0;
//     }

//     bool isEmpty()
//     {
//         if(size==0)
//         {
//             return true;
//         }
//         else
//         {
//              return false;
//         }
       
//     }
//     int getSize()
//     {
//         return size;
//     }
//     void push(T element)
//     {
//         if (head == NULL)
//         {
//             head = new Node<T>(element);

//             size++;
//         }
//         else
//         {
//             Node<T> *newnode = new Node<T>(element);

//             newnode->next = head;
//             head = newnode;
//             size++;
//         }
//     }
//     T pop()
//     {   if(isEmpty())
//     {
//         return 0;
//     }
//         T ans = head->data;
//         Node<T> *temp = head;
//         head = head->next;
//         delete temp;
//         size--;
//         return ans;
//     }
//     T top()
//     {
//        if(isEmpty())
//        {
//            return 0;
//        }
//         return head->data;
//     }
// };

template <typename T>
class Node
{
private:
    
public:
    T data;
    Node<T> *next;

    Node(T data)
    {

        this->data = data;
        this->next = NULL;
    }

};


template <typename T>
class Stack{
private:
    Node<T> *head;
    int size;

public:

    Stack()
    {
        head = NULL;
        size = 0;
    }

    ~Stack()
    {
        if(head)
        {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void push(const T& data)
    {
        Node<T> *newnode = new Node<T>(data); 
        if(head == NULL)
        {
            head = newnode;
            size++;
        }
        else{
            newnode->next = head;
            head = newnode;
            size++;
        }
    }

    void print() const
    {
        Node<T> *temp = this->head;

        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    T& Top() const
    {
        if(head)
        return head->data;
        else
        throw std::out_of_range("Stack Empty");
    }

    void  Pop()
    {
        if(head){
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        }
        else 
        {
            throw std::out_of_range("Stack Overflow");
        }
    }

    bool IsEmpty()
    {
        if(size == 0)
        {
            return true;
        }
        else return false;
    }


};

int main()
{
      Stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   //s.print();
   int& top = s.Top();
   top = 10; //changing the original stack through the reference
   cout<<top<<endl;
   cout<<s.Top()<<" ";
   s.Pop();
   cout<<s.Top()<<" ";
   s.Pop();
   cout<<s.Top()<<" ";
   s.Pop();
   cout<<s.Top()<<" ";
   s.Pop();
   cout<<s.Top()<<" ";
   //s.Pop();
   


}
