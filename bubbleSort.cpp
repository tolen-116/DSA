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
        for( j = 0; j < n - 1; j++ )
        {
            if( arr[ j ] > arr[ j + 1 ] )   //for ascending order
            //if( arr[ j ] < arr[ j + 1 ] ) //for desending order
            {
                int temp = arr[ j ];
                arr[ j ] = arr[ j + 1 ];
                arr[ j + 1 ] = temp;
            }
        }
    }

    cout << "sorted array: ";
    for( i = 0; i < n; i++ )
        cout << arr[ i ] << "  ";

    return 0;
}