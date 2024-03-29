#include <iostream>
using namespace std;

int main()
{
    int arr[ 10 ], n, i, j;

    cout << "size: ";
    cin >> n;

    cout << "elements: " << endl;
    for( i = 0; i < n; i++ )
        cin >> arr[ i ];

    for( i = 0; i < n; i++ )
    {
        int temp = arr[ i ];
        int j = i - 1;
        while( temp < arr[ j ] && j >= 0 )
        {
            arr[ j + 1 ] = arr[ j ];
            j--;
        }
        arr[ j + 1 ] = temp;
    }

    cout << "sorted array: ";
    for( i = 0; i < n; i++ )
        cout << arr[ i ] << "  ";

    return 0;
}