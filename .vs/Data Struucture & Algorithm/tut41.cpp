#include <iostream>
using namespace std;

// Write a program to display string from backward.

int main()
{
    char str[80];
    cout << "Enter string: " << endl;
    cin.getline(str, 80);

    int l;
    for (l = 1; str[l] != '\0'; l++)
        ;
    cout << "The length of string is: " << l << endl;

    for (int i = l; i >= 0; i--)
    {
        cout << str[i] << " ";
    }

    return 0;
}