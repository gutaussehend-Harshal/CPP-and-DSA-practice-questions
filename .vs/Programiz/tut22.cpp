#include <iostream>
using namespace std;

// Example 1: Compute Power Manually

int main () {
    int base;
    float exponent;
    int result = 1;

    cout << "Enter the value of base & exponent: " << endl;
    cin >> base >> exponent;

    while (exponent != 0)
    {
        result = result * base;
        exponent--;
    }
    cout << "Result = " << result << endl;
    return 0;
}