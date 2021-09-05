#include <iostream>
#include <ctype.h>
using namespace std;

// Example: Check Vowel or a Consonant Manually

int main()
{
    char ch;
    cout << "Enter the alphabet: " << endl;
    cin >> ch;

    if (isdigit(ch))
    {
        cout << "The entered character is digit." << endl;
    }
    else if (isalpha(ch))
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << ch << " is vowel." << endl;
        }
        else
        {
            cout << ch << " is consonant." << endl;
        }
    }
    else
    {
        cout << "The entered chracter is special character." << endl;
    }

    return 0;
}