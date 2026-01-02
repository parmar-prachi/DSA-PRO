#include <iostream>
using namespace std;

int main()
{
    int i, j ;

    for (i = 5; i >= 1; i--)
    {
        for ( int k = 1; k <= i; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (j = 5 - 1; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
