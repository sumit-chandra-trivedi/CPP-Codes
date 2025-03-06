#include<iostream>
#include<cstring>
using namespace std;
class Test{

	int data_1;
    int* data_2;
    char *name;

    public:

    Test(int val_1,int val_2,char* str) : data_1(val_1),data_2(new int(val_2)){
        std::cout<<"Parameterized Constructor Called "<<std::endl;

        name = new char(strlen(str)+1 );
        strcpy(this->name,str);
    }

    Test(const Test& obj)
    {
        cout<<"copy constructor called "<<endl;
        data_1 = obj.data_1;
        data_2 = new int(*obj.data_2);
        name = new char[strlen(obj.name)+1];
        strcpy(this->name,obj.name);
    }

    Test& operator=(const Test& obj)
    {
         cout<<"Assignment called "<<endl;
        if(this != &obj) //self assignment check
        {
            data_1 = obj.data_1;
            delete data_2; //free the old memory
            delete []name;
            data_2 = new int(*obj.data_2); // allocate memory and copy
            name = new char(strlen(obj.name)+1);
            strcpy(this->name,obj.name);

        }

        return *this;
    }
    

    ~Test()
    {
        if(data_2 != nullptr){delete data_2;}
        if(name != nullptr){delete[] name;}
    }


		

};

int main()
{
    //char name[] = "sumit";
    char* name = new char[6]; //Dynamic Approach
    strcpy(name,"sumit");
	Test a(1,2,name);
	Test b = a;
	Test c(b);
    a = b;
	//a = b = c;  //Here first attributes of c will be copied to b and then attributes of b will be copied to a 
	// Test* ptr = new Test;
	// delet ptr;
}
