#include <iostream>
using namespace std;
int main()
{
    // develop a program prints all alphabets from 'a' to 'z' by skipping 3 alphabets using a do-while loop

    /* Algorithm :

     Step 1: Start
     Step 2: Initialize a character variable ch = 'A'
     Step 3:Start a do-while loop
     Step 4:Print the current value of ch
     Step 5:Increase ch by 4 (skip next 3 alphabets)
     Step 6: Repeat the loop while ch <= 'Z'
     Step 7: End.  */

        char ch = 'A'; 

    do
    {
        cout << ch << " ";
        ch += 4; 

    } while (ch <= 'Z');

    return 0 ;

    /* output :  A E I M Q U Y */
    
}
