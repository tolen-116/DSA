//two opperations: 
//selection & exchange

#include <iostream>
using namespace std;

int main()
{
    int arr[ 10 ], n, i;

    cout << "size: ";
    cin >> n;

    cout << "elements: " << endl;
    for( i = 0; i < n; i++ )
        cin >> arr[ i ];

    
    for( i = 0; i < n; i++ )
    {
        int small = arr[ i ];
        int pass = i;
        for( int j = i + 1; j < n; j++ )
        {
            if( small > arr[ j ] )  //for ascending order
            //if( small < arr[ j ] )    //for desending order
            {
                small = arr[ j ];
                pass = j;
            }
        }

        int temp = arr[ i ];
        arr[ i ] = arr[ pass ];
        arr[ pass ] = temp;

    }

    cout << "\nsorted array: ";
    for( i = 0; i < n; i++ )
        cout << arr[ i ] << "  ";

    return 0;
}