#include <iostream>
using namespace std;

const int max = 20;
void push( int, int &, int, int );
void pop( int, int & );
void display( int, int );

int main()
{
    int stack[ 10 ];
    int top, item, ch;
    
    while( top >= 0 )
    {
        cout << "---MINU---" << endl;
        cout << "1. push" << endl << "2. pop" << endl << "3. print" << endl;

        cout << "enter your choice: ";
        cin >> ch;

        switch( ch )
        {
        case 1:
            cout << "enter the value to be pushed: ";
            cin >> item;
            push( stack, top, item, max );
            break;
        
        case 2:
            pop( stack, top );
            break;

        case 3:
            display( stack, top );
            break;

        default: 
            cout << "exit";
        }
    }

    return 0;
}

void push( int stack[], int &top, int item, int max )
{
    if( max >= top - 1 )
        cout << "stack overflow";
    else 
    {
        top++;
        stack[ top ] = item;
    }
}

void pop( int stack[], int &top )
{
    int item;
    if( top <= 0 )
        cout << "stack underflow";
    else
    {
        item = stack[ top ];
        top--;
    }
    cout << "the deleted element is " << item;
}

void display( int stack[], int top )
{
    for( int i = top; i > 0; i-- )
    {
        cout << stack[ i ] << "  ";
    }
}