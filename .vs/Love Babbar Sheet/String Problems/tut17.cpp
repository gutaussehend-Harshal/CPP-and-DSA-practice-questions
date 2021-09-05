#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char s[], int left, int right)
{
    if (left >= right)
    {
        return true;
    }

    if (s[left] != s[right])
    {
        return false;
    }

    return isPalindrome(s, left + 1, right - 1);
}

int main()
{
    system("CLS");
    char s[] = "racecar";
    // int n = sizeof(s) / sizeof(s[0]);
    int n = strlen(s);
    // for(int n = 0; s[n] != '\0'; n++);
    cout << n << endl;

    if (isPalindrome(s, 0, n - 1))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}