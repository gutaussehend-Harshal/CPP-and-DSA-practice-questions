#include <iostream>
using namespace std;

// Write a program to concatenate one string contents to another.

int main()
{
    char str1[80], str2[80];
    cout << "Enter first string: " << endl;
    cin.getline(str1, 80);
    cout << "Enter second string: " << endl;
    cin.getline(str2, 80);

    int l = 0;
    for (l = 1; str1[l] != '\0'; l++);
    cout << "The length of first string is: " << l << endl;

    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[l++] = str2[i];
    }

    str1[l] = '\0';
    cout << "The first string after adding second string content:\n"<< str1 << endl;

    return 0;
}