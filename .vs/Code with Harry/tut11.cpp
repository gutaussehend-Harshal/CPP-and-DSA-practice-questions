#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {

        if (i == 2)
        {
            break;  // Use of break.
        }
        cout << i << endl;
    }
    
    cout << endl << endl;

     for (int i = 0; i < 4; i++)
    {

        if (i == 2)
        {
            continue;   // Use of continue.
        }
        cout << i << endl;
    }
    return 0;
}