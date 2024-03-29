//The array need to be sorted

#include <iostream>
using namespace std;

int main()
{
    int i, beg, end, loc, condition = false, arr[ 10 ], n;

    cout << "Please enter the size of the array: ";
    cin >> n;

    cout << "Please entr the elements of the array: " << endl;  //enter a sorted array
    for( i = 0; i < n; i++ )
    {
        cin >> arr[ i ];
    }

    cout << "\n\nThe array is: " << endl;
    for( i = 0; i < n; i++ )
    {
        cout << arr[ i ] << "  ";
    }

    beg = 0;
    end = n - 1;

    int mid;
    int element;
    cout << "\n\nPlease enter the element to be searched: ";
    cin >> element;

    for( i = 0; i < n; i++ )
    {
        mid = ( beg + end ) / 2;
        if( arr[ mid ] == element )
        {
            loc = mid;
            condition = true;
        }
        else if( arr[ mid ] < element )
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        
    }

    if( condition == true )
        cout << "The element " << element << " is found at position no. " << loc << " with respect to zeroth position.";
    else
        cout << element << " is not in the array.";

    return 0;

}