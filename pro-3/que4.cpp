#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < 5 - i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}
