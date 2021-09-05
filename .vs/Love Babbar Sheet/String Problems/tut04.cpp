#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

bool canFormPalindrome(string str)
{   

    int count[NO_OF_CHARS] = {0};

    for (int i = 0; str[i]; i++)
    {
        count[str[i]]++;
    }
    cout << count << endl;
    
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        if (count[i] & 1)
        {
            odd++;
        }

        if (odd > 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str;
    system("CLS");
    cout << "Enter a string: ";
    cin >> str;

    if (canFormPalindrome(str))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
