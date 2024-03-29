//merging two sorted array
#include <iostream>
using namespace std;

int main()
{
    int arr_1[ 10 ], arr_2[ 10 ], arr_3[ 20 ], m, n, i, j, k;

    cout << "---FIRST ARRAY---" << endl;
    cout << "size: ";
    cin >> m;
    cout << "elements: " << endl;
    for( i = 0; i < m; i++ )
        cin >> arr_1[ i ];
    
    cout << "---SECOND ARRAY---" << endl;
    cout << "size: ";
    cin >> n;
    cout << "elements: " << endl;
    for( i = 0; i < n; i++ )
        cin >> arr_2[ i ];

    i = j = k = 0;
    while( i < m && j < n )
    {
        if( arr_1[ i ] < arr_2[ j ] )
            arr_3[ k++ ] = arr_1[ i++ ];
        else
            arr_3[ k++ ] = arr_2[ j++ ];
    }

    while( i < m )
    {
        arr_3[ k++ ] = arr_1[ i++ ];
    }

    while( j < n )
    {
        arr_3[ k++ ] = arr_2[ j++ ];
    }

    cout << "\n---MERGED ARRAY--- " << endl;
    for( i = 0; i < m + n; i++ )
        cout << arr_3[ i ] << "  ";

    return 0;
}