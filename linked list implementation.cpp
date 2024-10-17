// Linked List
#include<iostream>
using namespace std; 
class List
{
    public: 
    int data; 
    List* next;
    
    List(int num)
    {
        data = num;
        next = NULL;
    }
    
    void display()
    {
        cout<<data<<" "<<next<<endl;
    }
};

int main()
{
    List* l1 = new List(6);
    cout<<l1->data<<" "<<l1->next<<endl;
    l1->display();
}


/* 
OUTPUT: 
6 0 
6 0 
*/
