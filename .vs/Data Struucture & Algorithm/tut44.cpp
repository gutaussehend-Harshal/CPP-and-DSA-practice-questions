#include <iostream>
using namespace std;

// Write a program to compare two strings they are exact equal or not.

int main()
{
    char str1[80];
    cout << "Enter first string:  " << endl;
    cin.getline(str1, 80);

    char str2[80];
    cout << "Enter second string:  " << endl;
    cin.getline(str2, 80);

    int i;
    for (i = 0; str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'; i++);
    if (str1[i] - str2[i] == 0)
    {
        cout << "Strings are equal." << endl;
    }
    else
    {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}