#include <iostream>
using namespace std;

// Write a program to find a substring within a string. If found display its starting position.

int main()
{
    char str1[80], str2[80];
    cout << "Enter first string: " << endl;
    cin.getline(str1, 80);
    cout << "Enter second string: " << endl;
    cin.getline(str2, 80);

    int l;
    for (l = 1; str2[l] != '\0'; l++)
        ;
    cout << "Length of second string is: " << l << endl;

    int i, j;
    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str2[j] == str1[i])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    if (l == j)
    {
        cout << "Substring found at position: " << i - j + 1;
    }
    else
    {
        cout << "Sunstring not found" << endl;
    }

    return 0;
}