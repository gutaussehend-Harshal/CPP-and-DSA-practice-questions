#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer: " << endl;
    cin >> a;

    // By using if & else.
    // if (a % 2 == 0)
    // {
    //     cout << a << " is even." << endl;
    // }
    // else
    // {
    //     cout << a << " is odd." << endl;
    // }

    // By using turnery operator
    (a % 2 == 0) ? cout << a << " is even." : cout << a << " is odd.";
    return 0;
}