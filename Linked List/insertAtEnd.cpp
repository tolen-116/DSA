#include <iostream>

// Define a node structure for the linked list
struct Node 
{
    int data;
    Node *next;
    
    Node( int val ) : data( val ), next( nullptr ) {}
};

// Define a class for the linked list
class LinkedList 
{
    private:
        Node *head;

    public:
        //constructor
        LinkedList() : head( nullptr ) {}

        // Function to insert an element at the end of the linked list
        void insert( int );

        //function to insert an element at the beginning of the linked list
        void insertAtBeginning( int );

        //Function to insert an a specific location
        void insertAtPosition( int, int );
        
        // Function to print the elements of the linked list
        void display();

        // Function to delete all nodes of the linked list (cleanup)
        void clear(); 
        
};

void LinkedList::insert( int val ) 
{
    Node *newNode = new Node( val );
    if( head == nullptr ) 
    {
        head = newNode;
    } 
    else 
    {
        Node *temp = head;
        while( temp -> next != nullptr ) 
        {
            temp = temp->next;
        }
        temp -> next = newNode;
    }
}

void LinkedList::insertAtBeginning( int val )
{
    Node *newNode = new Node( val );
    newNode -> next = head;
    head = newNode;
}

void LinkedList::insertAtPosition( int val, int position ) 
{
    if( position <= 0 ) 
    {
        std::cerr << "Invalid position\n";
    }
    
    Node *newNode = new Node( val );
    if( position == 1 ) 
    {
        newNode -> next = head;
        head = newNode;
    }
    
    Node* temp = head;
    for( int i = 1; i < position - 1 && temp != nullptr; i++ ) 
    {
        temp = temp -> next;
    }
    
    if( temp == nullptr ) 
    {
        std::cerr << "Invalid position\n";
        delete newNode;
    }
    
    newNode -> next = temp -> next;
    temp -> next = newNode;
}
void LinkedList::display()
{
    Node *temp = head;
    while( temp != nullptr ) 
    {
        std::cout << temp -> data << " ";
        temp = temp -> next;
    }
    std::cout << std::endl;
}

void LinkedList::clear()
{
    Node *temp;
    while( head != nullptr ) 
    {
        temp = head;
        head = head -> next;
        delete temp;
    }
}

int main() 
{
    LinkedList list;
    int numTerms;

    std::cout << "Enter the number of terms: ";
    std::cin >> numTerms;

    std::cout << "Enter " << numTerms << " elements:\n";
    for ( int i = 0; i < numTerms; i++ ) 
    {
        int val;
        std::cin >> val;
        list.insert( val );
    }

    int element;

    std::cout << "Elements inserted into the linked list: ";
    list.display();

    std::cout << "\nEnter an element to be inserted at the beginning: ";
    std::cin >> element;

    list.insertAtBeginning( element );

    std::cout << "\nLinked List after inserting an element at the beginning: " << std::endl;
    list.display(); 

    int item, pos;
    std::cout << "\nEnter an element to be inserted and its specific position: ";
    std::cin >> item;
    std::cout << "Enter postion: ";
    std::cin >> pos;

    list.insertAtPosition( item, pos );

    std::cout<< "\n---THE FINAL LINKED LIST---" << std::endl;
    list.display();

    // Cleanup
    list.clear();

    return 0;
}
