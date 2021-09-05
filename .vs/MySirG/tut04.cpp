#include <bits/stdc++.h>
using namespace std;

// Write a program which allows integer input only -->

int getIntegerOnly()
{
    int num = 0, ch;
    do
    {
        ch = getchar();
        if (ch >= 48 && ch <= 57)
        {
            cout << ch;
            num = num * 10 + (ch - 48);
        }
        if (ch == 13)
        {
            break;
        }

    } while (1);
    return (num);
}
int main()
{
    system("CLS");
    int x = 0;
    // cin >> x;
    x = getIntegerOnly();
    cout << "You have entered " << x << endl;
    getchar();
    return 0;
}