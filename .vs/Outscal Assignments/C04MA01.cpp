#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << j + 1 << ",";
        }
        cout << endl;
    }
    return 0;
}