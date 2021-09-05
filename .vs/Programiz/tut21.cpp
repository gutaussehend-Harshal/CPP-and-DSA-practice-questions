#include <iostream>
using namespace std;

// Example: C++ Program to Reverse an Integer

int main () {
    int n, remainder, reversedNumber = 0;
    cout << "Enter a number: " << endl;
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n = n/10;
    }
    cout << "Reversed number is: " << reversedNumber << endl;
    return 0;
}