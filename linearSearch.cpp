#include <iostream>
using namespace std;

int main()
{
    int i, loc, arr[ 10 ], n;

    cout << "Please enter the size of the array: ";
    cin >> n;

    cout << "Please enter the elements: " <<endl;
    for( i = 0; i < n; i++ )
    {
        cin >> arr[ i ];
    }

    cout << "\nThe array is: " << endl;
    for( i = 0; i < n; i++ )
    {
        cout << arr[ i ] << "  ";
    }

    int element;
    cout << "\n\nPlease enter the element to be search: " ;
    cin >> element;

    for( i = 0; i < n; i++ )
    {
        if( arr[ i ] == element )
        {
            loc = i;
        }
    }

    cout << "The element " << element << " is found at position no. " << loc << " with respect to zeroth position.";

    return 0;

}