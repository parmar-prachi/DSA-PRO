#include <iostream>
using namespace std;

int main()
{

    // Find the largset Element in a 2D Array .//

    int size , r , c;

    cout << "Enter the row of elements in the array: ";
    cin >> r;
    cout << "Enter the columns of elements in the array: ";
    cin >> c;

    int arr[r][c];

    cout << "Enter elements : ";

    for (int i = 0; i < r; i++)
    {
        for ( int j= 0 ; j< c ; j++){

            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];

    for (int i = 1; i < r; i++)
    {
        for( int j = 0 ; j < c ; j++){
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "The largest element in the array is: " << max << endl;

    return 0;
}
