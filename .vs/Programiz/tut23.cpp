#include <iostream>
using namespace std;

int main()
{
    int n, num, remainder, reversedNumber = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    n = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num = num / 10;
    }

    cout << "Reversed number is: " << reversedNumber << endl;

    if (n == reversedNumber)
    {
        cout << "The number is palindrome." << endl;
    }
    else
    {
        cout << "The number is not palindrome." << endl;
    }

    return 0;
}