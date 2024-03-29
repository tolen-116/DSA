#include <iostream>
using namespace std;

struct Node
{
    int data;
    int *link;
};

int main()
{
    Node *head = NULL;
    head = new Node();  //dynamic memory allocation( malloc() is used in C language )
    head -> data = 23;
    head -> link = NULL;

    Node *current = NULL;
    current = new Node();
    current -> data = 24;
    current -> link = NULL;

    head -> link = current;

    //cout << current -> data;
    //delete head;

    return 0;
}


