#include <iostream>
using namespace std;

// Write a program to check a string is palindrome or not.

int main()
{
    char str[80];
    cout << "Enter a string: " << endl;
    cin.getline(str, 80);

    int l;
    for (l = 0; str[l] != '\0'; l++);
    cout << l << endl;
    
    int i;
    for (i = 0; (i < l / 2) && (str[i] == str[l - i - 1]); i++);
    if (i == l / 2)
    {
        cout << "String is palindrome." << endl;
    }
    else
    {
        cout << "String is not palindrome." << endl;
    }

    return 0;
}