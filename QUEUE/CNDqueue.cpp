#include<iostream>
using namespace std;
class Deque {
    int* data;
    int nextIndex;
    int firstIndex;
    int lastindex;
    int scdlastindex;
    int size;
    public:
    Deque(int size)
    {
        data=new int[4];
        nextIndex=0;
        firstIndex=-1;
        size=0;
    }
    
    
};
int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}
