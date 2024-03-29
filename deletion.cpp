#include <iostream>
using namespace std;

int main()
{
    int arr[ 10 ], n, i, loc;

    cout<< "size: ";
    cin >> n;
    cout << "element: " << endl;
    for( i = 0; i < n; i++ )
    {
        cin >> arr[ i ];
    }

    cout << "\nenter location of element to be deleted: ";
    cin >> loc;

    if( loc > n)
        cout << "Deletion not possible.";

    else
    {
        int element = arr[ loc];
       // int back = loc;

        while( loc < n )
        {
            arr[ loc ] = arr[ loc + 1 ];
            loc++;
        }

        n--;

        cout << "array after deletion: ";
        for( i = 0; i < n; i++ )
        {
            cout << arr[ i ] << "  ";
        }
        }
    

    return 0;
}