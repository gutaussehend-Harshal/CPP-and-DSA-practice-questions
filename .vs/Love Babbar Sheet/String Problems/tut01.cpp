#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[80];
    system("CLS");
    cout << "Enter a string: ";
    gets(str);

    // int l = strlen(str);  Function to calculate length of string
    int l;
    for (l = 0; str[l]; l++);   // another method to calculate string length
    cout << l << endl;

    cout << strrev(str) << endl;  // function to reverse string

    for (int i = 0; i < l / 2; i++)
    {
        swap(str[i], str[l - 1 - i]);   // another method to reverse string
    }

    cout << str << endl;
    return 0;
}