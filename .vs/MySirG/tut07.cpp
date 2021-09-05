#include <bits/stdc++.h>
using namespace std;

// Clculate length of the string -->

int main()
{
    char s[20], temp;
    system("CLS");
    cout << "Enter a string" << endl;
    // gets(s);
    cin.getline(s, 20);

    int l, k, i;
    for (l = 0; s[l] != '\0'; l++); // Without predefined function
    cout << "The length of a string is: " << l << endl;

    k = strlen(s); // By using predefined function
    cout << "The length of a string is: " << k << endl;

    cout << strrev(s) << endl; // reverse string by using predefined function
    cout << s << endl;

    for (i = 0; i < l / 2; i++)
    {
        swap(s[i], s[l - 1 - i]);
        // temp = s[i];
        // s[i] = s[l - 1 - i];
        // s[l - 1 - i] = temp;
    }
    cout << s << endl;
    return 0;
}