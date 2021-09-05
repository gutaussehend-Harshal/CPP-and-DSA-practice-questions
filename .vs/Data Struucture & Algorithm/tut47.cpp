#include <iostream>
using namespace std;

// Write a program to reverse a string.

int main()
{
    char str[80];
    int temp;
    cout << "Enter a string: " << endl;
    gets(str);

    int l;
    for (l = 0; str[l] != '\0'; l++);
    cout << "The length of the string is: " << l << endl;

    int i, j;
    for (i = 0, j = l - 1; i < l / 2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reverse string: " << str << endl;

    return 0;
}