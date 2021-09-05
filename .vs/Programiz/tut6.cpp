#include <iostream>
using namespace std;

// Example 1: Swap Numbers (Using Temporary Variable)

int main () {
    int a, b, temp;
    cout << "Enter the values of a & b: " << endl;
    cin >> a >> b;
    cout << "The values of a & b are before swaping: " << "a = " << a << " b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    // a = a*b;
    // b = a/b;
    // a = a/b;

    // a = a+b;
    // b = a-b;
    // a = a-b;

    cout << "The values of a & b are after swaping: " << "a = " << a << " b = " << b << endl;

    return 0;
}