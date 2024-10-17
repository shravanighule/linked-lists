//Addition at Start 
#include<iostream>
using namespace std; 

class List
{
    public: 
    int data; 
    List* next;
    
    // Constructor
    List(int num)
    {
        data = num;
        next = NULL;
    }
};

// Function to insert a new node at the head
void insert_head(List* &head, int data)
{
    List* new_node = new List(data);  // Create a new node
    new_node->next = head;  // Point new node to the current head
    head = new_node;  // Update head to the new node
}

// Function to display the linked list
void display(List* head)
{
    List* temp = head; 
    while (temp != NULL)
    {
        cout << temp->data << " -> ";  // Print data
        temp = temp->next;  // Move to the next node
    }
    cout << "NULL" << endl;  // End of list
}

int main()
{
    List* head = NULL;  // Initialize the head to NULL
    insert_head(head, 30);  // Insert first node
    display(head);  // Display list
    
    insert_head(head, 32);  // Insert second node
    display(head);  // Display list
    
    insert_head(head, 35);  // Insert third node
    display(head);  // Display list

    return 0;
}


/*
OUTPUT: 
30 -> NULL
32 -> 30 -> NULL
35 -> 32 -> 30 -> NULL
*/
