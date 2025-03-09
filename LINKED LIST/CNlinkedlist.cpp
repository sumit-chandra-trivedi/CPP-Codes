#include <iostream>
using namespace std;
#include "node.cpp"
Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->Next = newnode;
            tail = newnode;
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
        temp = temp->Next;
    }
    cout << endl;
}
int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->Next;
        count++;
    }
    return count;
}
void printIthNode(Node *head, int i)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (count == i)
        {
            cout << temp->data;
            break;
        }
        temp = temp->Next;
        count++;
    }
}
Node *Insert(Node *head, int i, int data)
{
    Node *newnode = new Node(data);
    if (i == 0)
    {
        newnode->Next = head;
        head = newnode;
        return head;
    }

    Node *temp = head;
    int count = 0;
    while (count < i - 1)
    {

        temp = temp->Next;
        count++;
    }
    newnode->Next = temp->Next;
    temp->Next = newnode;
    return head;
}
Node *deleteNode(Node *head, int pos)
{
    if (pos == 0)
    {
        head = head->Next;
        return head;
    }
    Node *temp1 = head;
    Node *temp2 = head->Next;
    int count = 0;
    while (temp2 != NULL && count < pos - 1)
    {
        temp1 = temp1->Next;
        temp2 = temp2->Next;
        count++;
    }
    if (temp2 == NULL)
    {
        return head;
    }
    temp1->Next = temp2->Next;
    delete temp2;
    return head;
}
int lengthRecursive(Node *head)
{

    if (head == NULL)
    {
        return 0;
    }
    return 1 + lengthRecursive(head->Next);
}
Node *InsertRecursive(Node *head, int i, int data)
{
    if (head == NULL)
        return NULL;

    Node *curr = InsertRecursive(head->Next, i - 1, data);
    if (i == 0)
    {
        Node *temp = new Node(data);
        temp->Next = head;
        return temp;
    }

    if (i == 1)
    {
        Node *temp = new Node(data);
        temp->Next = head->Next;
        head->Next = temp;
        return head;
    }
    return head;
}
int findNode(Node *head, int n)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    int count = 0;
    while (temp->data != n)
    {
        if (temp->Next == NULL && temp->data != n)
        {
            return -1;
        }
        temp = temp->Next;
        cout << "k";
        count++;
    }

    return count;
}
Node *appendLastNToFirst(Node *head, int n)
{
    Node *temp1 = head;
    Node *temp2 = head;
    int count1 = 0;
    int count = 0;
    while (temp2 != NULL)
    {
        temp2 = temp2->Next;
        count1++;
    }
    cout << count1 << endl;
    temp2 = head;
    Node *a;
    while (temp2 != NULL)
    {

        if (count == count1 - n)
        {
            head = temp2;
        }
        if (count == count1 - n - 1)
        {
            a = temp2;
        }
        temp2 = temp2->Next;

        if (temp2->Next == NULL)
        {
            temp2->Next = temp1;
            break;
        }
        count++;
    }
    a->Next = NULL;
    return head;
}
Node *removeDuplicates(Node *head)
{
    Node *top = head;
    Node *tail = head->Next;
    while (tail->Next != NULL)
    {

        if (top->data != tail->data)
        {
            top = top->Next;
            tail = tail->Next;
        }
        while (top->data == tail->data)
        {
            if (tail->Next == NULL)
            {
                top->Next = NULL;
                break;
            }
            if (top->data != tail->Next->data)
            {
                top->Next = tail->Next;
                tail = tail->Next;
                break;
            }
            tail = tail->Next;
        }
    }
    return head;
}
bool isPalindrome(Node *head)
{
    int a;
    if (head->Next == NULL)
    {
        a = head->Next->data;
        return true;
    }
    bool res = isPalindrome(head->Next);
    if (head->data == a)
    {
        return true;
    }
}
void printReverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printReverse(head->Next);
    cout << head->data << " ";
}
int findNodeRec(Node *head, int n)
{
    int count = 1;
    while (head->Next != NULL)
    {
        count++;
    }
    //    cout<<"L"<<endl;
    // 	if(head==NULL)
    //     {
    //         return -1;
    //     }
    if (head->data == n)
    {
        return count - 1;
    }

    int res = findNodeRec(head->Next, n);

    return res;
}

Node *midPoint(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head->Next;
    int count = 0;
    while (head != NULL)
    {
        head = head->Next;
        count++;
    }
    if (count % 2 != 0)
    {
        while (fast != NULL)
        {
            slow = slow->Next;
            fast = fast->Next->Next;
        }
    }
    if (count % 2 == 0)
    {
        while (fast->Next != NULL)
        {
            slow = slow->Next;
            fast = fast->Next->Next;
        }
    }

    return slow;
}
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node *fh = NULL;
    Node *ft = NULL;
    if (head1->data < head2->data)
    {

        fh = head1;
        ft = head1;
        head1 = head1->Next;
    }
    else if (head1->data > head2->data)
    {

        fh = head2;
        ft = head2;
        head2 = head2->Next;
    }
    while (head1 != NULL && head2 != NULL)
    {

        if (head1->data > head2->data)
        {

            ft->Next = head2;
            ft = head2;
            head2 = ft->Next;
            if (head2 == NULL)
            {
                cout << "null";
            }
        }
        else if (head1->data < head2->data)
        {

            ft->Next = head1;
            ft = head1;
            head1 = ft->Next;
        }
    }
    if (head1 != NULL)
    {

        ft->Next = head1;
    }
    if (head2 != NULL)
    {

        ft->Next = head2;
    }
    return fh;
}
Node *mergeSort(Node *head)
{

    if (head == NULL || head->Next == NULL)
    {
        return head;
    }

    Node *mid = midPoint(head);
    Node *left = head;
    Node *right = mid->Next;
    mid->Next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    Node *result = mergeTwoSortedLinkedLists(left, right);
    return result;
}
Node *reverseLinkedListRec(Node *head)
{
    if (head == NULL || head->Next == NULL)
    {
        return head;
    }
    Node *result = reverseLinkedListRec(head->Next);
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = head;

    temp->Next->Next = NULL;
    return result;
}
// Node *evenAfterOdd(Node *head)
// {
//     if (head == NULL)
//     {
//         return head;
//     }
//     Node *h = evenAfterOdd(head->Next);
 
//     if (head->data % 2 == 0)
//     {
//         Node *temp = h;
//         while (temp->Next != NULL)
//         {
//             temp = temp->Next;
//         }
//         temp->Next = head;
//         return h;
//     }
//     else if (head->data % 2 != 0)
//     {
//         head->Next = h;
//         return head;
//     }
// }
Node *evenAfterOdd(Node *head)
{
    Node *Oh = NULL;
    Node *Ot = NULL;
    Node *Eh = NULL;
    Node *Et = NULL;
    Node *temp = head;

    while (head != NULL)
    {

        if (head->data % 2 == 0 && Eh == NULL)
        {
            Eh = head;
            Et = head;
            head = head->Next;
        }
        else if (head->data % 2 != 0 && Oh == NULL)
        {
            Oh = head;
            Ot = head;
            head = head->Next;
        }
        else if (head->data % 2 == 0)
        {
            Et->Next = head;
            Et = head;
            head = head->Next;
        }
        else if (head->data % 2 != 0)
        {
            Ot->Next = head;
            Ot = head;
            head = head->Next;
        }
    }
    if (Ot->Next != NULL)
    {
        Ot->Next = Eh;
        Et->Next = NULL;
    }
    else if(Oh==NULL)
    {
      return Eh;
    }

    return Oh;
}
Node *swapNodes(Node *head, int i, int j)
{
	Node *p1;
	Node *c1;
	Node *p2;
	Node *c2;
    Node *h=head;
    int count=0;
     
 

    while(head!=NULL)
    {
       
        if (count ==i-1)
        {
          p1=head;
          c1=head->Next;
          
        }
        if(count==j-1)
        {
            p2=head;
            c2=head->Next;
            break;
        }
        head=head->Next;
        count++;
    }
    p1->Next=c2;
    p2->Next=c1;
    
    c1->Next=c2->Next;
    c2->Next=p2;
    
    return h;

}
int main()
{
    Node *head = takeInput();
    // print(head);
    // int len = length(head);
    // cout << len;
    // printIthNode(head,3);
    // head = Insert(head, 0, 100);
    // head = deleteNode(head, 4);
    //  cout<<lengthRecursive(head);
    // head = InsertRecursive(head, 2, 100);
    // cout << findNode(head, 100);
    // head = appendLastNToFirst(head, 1);
    // head=removeDuplicates(head);
    // printReverse(head);
    // cout << isPalindrome(head);
    // Node *mid = midPoint(head);
    // cout << mid->data;
    // Node *head1 = takeInput();
    // Node *head2 = takeInput();
    // Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
    // print(head3);
    // head = mergeSort(head);
    // head=reverseLinkedListRec(head);
    // cout << findNodeRec(head, 3);
    // head = evenAfterOdd(head);
    head=swapNodes(head, 2, 5);

    print(head);
}
