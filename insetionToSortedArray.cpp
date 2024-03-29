//use a sorted array

#include <iostream>
using namespace std;

int main()
{
    int arr[ 10 ], n, element, i;

    cout << "size: ";
    cin >> n;
    
    cout << "Elements: " << endl;
    for( i = 0; i < n; i++ )
    {
        cin >> arr[ i ];
    }

    cout << "\nEnter element to be added: ";
    cin >> element;

    if( n > 9)
    {
        cout << "Array OVERFLOWED!!";
    }

    else if( n < 10)
    {
        int back = n;
        while( arr[ back - 1 ] > element )
        {
            arr[ back ] = arr[ back - 1 ];
            back--;
        }

        arr[ back ] = element;
        n++;

        cout << "Array after addition: ";
        for( i = 0; i < n; i++ )
        {
            cout << arr[ i ] << "  ";
        }

    }

    return 0;
}