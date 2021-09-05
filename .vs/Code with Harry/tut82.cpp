#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "*     ";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "* ";
    }
    cout << endl;
    
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "*     ";
        }
        cout << endl;
    }

    return 0;
}