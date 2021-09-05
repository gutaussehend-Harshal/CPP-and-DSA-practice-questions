#include <iostream>
using namespace std;

int main()
{

    /* Loops in c++ : 
    There are 3 ttypes of loops in c++ :
    1.For loop
    2.while loop
    3.do-while loop */

    // For loop in c++
    // cout << 1 << endl;
    // cout << 2 << endl;
    // cout << 3 << endl;

    // int i = 1;
    // cout << i;
    // i++;

    // int i = 1;
    // cout << i;
    // i++;

    // int i = 1;
    // cout << i;
    // i++;

    // int i = 1;
    // cout << i;
    // i++;

    // Syntax for 'For loop' :
    // for (initialization; condition; updation){
    //     loop body (c++ code);
    // }
    // Example of infinite for loop:
    // for (int i = 1; 35 <= 40; i++)
    // {
    //     cout << i << endl;
    // }

    // While loop in c++ :
    // Syntax :
    // while (condition)
    // {
    //     c++ statements;
    // }
    // printing 1 to 40 using while loop

    // int i = 1;
    // while (i <= 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Example of infinite for loop:
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    // }

    // do-While loop in c++ :
    // Syntax :
    // do  (condition)
    // {
    //     c++ statements;
    // }
    //     while (condition)

    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 40); 

    return 0;
}