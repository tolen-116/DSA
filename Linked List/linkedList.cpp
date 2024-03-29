#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node( int value ) : data( value ), next( 0 ) {}
};

class LinkedList
{
    private:
        Node* head;

    public:
        LinkedList() : head( NULL ) {}

        void append( int value )
        {
            Node* newNode = new Node( value );
            if( head == NULL )
                head = newNode;            

            Node* current = head;
            while( current -> next != NULL )
            {
                current = current -> next;
            }
            current -> next = newNode;
        }

        void display()
        {
            Node* current = head;
            while( current != NULL )
            {
                cout << current -> data << "  ";
                current = current -> next;
            }
            cout << endl;
        }
};


int main()
{
    LinkedList list;
    list.append( 1 );
    list.append( 2 );
    list.append( 3 );
    list.display();

    return 0;
}
