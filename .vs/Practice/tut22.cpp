#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer: " << endl;
    cin >> a;

    // if (a > 0)
    // {
    //     cout << "The absolute value of an integer is: " << a;
    // }
    // else
    // {
    //     cout << "The absolute value of an integer is: " << -(a);
    // }

    // (a > 0) ? cout << "The absolute value of an integer is: " << a : cout << "The absolute value of an integer is: " << -(a);

    cout << "The absolute value of an integer is: " << abs(a) << endl;
     
    return 0;
}