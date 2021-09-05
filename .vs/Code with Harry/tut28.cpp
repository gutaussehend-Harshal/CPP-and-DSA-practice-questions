#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // ****
    // ****
    // ****
    // ****
    /* for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++) 
        {

            cout << "*"; 
        }
        cout << endl;
    } */

    for (int j = 0; j < n; j++)

        for (int i = 0; i < n; i++)

            cout << "*" << ((i==n-1) ? '\n' : ' '); 

        // i = 0 * i + 1
        // i = 1 ** i + 1
        // i = 2 *** i + 1
        // i = 3 **** i + 1


            for (int j = 0; j < n; j++)

        for (int i = 0; i < i+1; i++)

            cout << "*" << ((i==i) ? '\n' : ' '); 

    return 0;
}