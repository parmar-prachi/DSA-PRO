#include <iostream>
using namespace std;

int main()
{
    // print and find the sum of row and column from given 2D array
    
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int choice;

    cout << "Menu:" << endl;
    cout << "1. Print and Sum a Row " << endl;
    cout << "2. Print and Sum a Column " << endl;

    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int rowNum;
        cout << "Enter row number (1 to " << rows << "): ";
        cin >> rowNum;

        rowNum--; // converts the row number from 1-based indexing to 0-based indexing.

        if (rowNum >= 0 && rowNum < rows)
        {
            int sum = 0;
            cout << "Row " << (rowNum + 1) << ": ";
            for (int j = 0; j < cols; j++)
            {
                cout << arr[rowNum][j] << " "; // row fixed, columns changing
                sum += arr[rowNum][j];
            }
            cout << "\nSum of row = " << sum << endl;
        }
        else
        {
            cout << "Invalid row number!" << endl;
        }
        break;
    }

    case 2:
    {
        int colNum;
        cout << "Enter column number (1 to " << cols << "): ";
        cin >> colNum;
        colNum--;

        if (colNum >= 0 && colNum < cols)
        {
            int sum = 0;
            cout << "Column " << (colNum + 1) << ": ";
            for (int i = 0; i < rows; i++)
            {
                cout << arr[i][colNum] << " "; // column fixed, rows changing
                sum += arr[i][colNum];
            }
            cout << "\nSum of column = " << sum << endl;
        }
        else
        {
            cout << "Invalid column number!" << endl;
        }
        break;
    }

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
