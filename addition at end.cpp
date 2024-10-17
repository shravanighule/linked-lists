#include<iostream>
using namespace std; 

// Definition for a single node in the linked list
class Node 
{
    public:
    int value;  // Stores the data
    Node* next; // Pointer to the next node
    
    // Constructor
    Node(int val) 
    {
        value = val;
        next = NULL;
    }
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node*& head, int value) 
{
    Node* new_node = new Node(value);  // Create a new node
    new_node->next = head;  // Point the new node's next to the current head
    head = new_node;  // Update head to the new node
}

// Function to display the linked list
void display(Node* head) 
{  
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp->value << "->";  // Print the value of each node
        temp = temp->next;  // Move to the next node
    }
    cout << "NULL" << endl;  // Display NULL at the end of the list
}

int main() 
{  
    Node* head = NULL;  // Initialize the head of the list to NULL

    // Insert nodes and display the list
    insertAtHead(head, 4);
    display(head);

    insertAtHead(head, 5);
    display(head);

    insertAtHead(head, 10);
    display(head);

    return 0;
}


/*
OUTPUT: 
4->NULL
5->4->NULL
10->5->4->NULL
*/
