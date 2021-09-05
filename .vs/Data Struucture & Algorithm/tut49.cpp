#include <iostream>
using namespace std;

// Write a program to convert a string in uppercase.

int main()
{
    char str[80];
    cout << "Enter a string: " << endl;
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'a' && str[i] <= 'z') ? (str[i] - 32) : str[i];
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}