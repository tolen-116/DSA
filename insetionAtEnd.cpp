#include <iostream>
using namespace std;

int main()
{
    int arr[ 10 ], n, element;

    cout << "Please enter the size of the array: ";
    cin >> n;

    cout << "Please enter the elements of the array: " << endl;
    for( int i = 0; i < n; i++ )
    {
        cin >> arr[ i ];
    }

    cout << "\n\nThe array is: " << endl;
    for( int i = 0; i < n; i++ )
    {
        cout << arr[ i ] << "  ";
    }

    cout << "\n\nPlease enter the element to be added: ";
    cin >> element;

    if( n < 10)
    {
        cout << "\nAddition successful...";
        arr[ n ] = element;

        cout << "\n\nThe array after addition is: " << endl;
        for( int i = 0; i < n+1; i++ )
        {
            cout << arr[ i ] << "  ";
        }
    }
    else
        cout << "\nAddition failed...the array is OVERLFOWED.";

    return 0;
}