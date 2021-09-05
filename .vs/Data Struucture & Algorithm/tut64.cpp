#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{

    int n1 = s1.size();
    int n2 = s2.size();

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << s1 << endl;
    cout << s2 << endl;

    if (n1 != n2)
    {
        return false;
    }

    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "abc";
    string s2 = "cab";

    //anagram(s1, s2);
    if (anagram(s1, s2))
    {
        cout << "The strings are anagram of each other." << endl;
    }
    else
    {
        cout << "The strings are not anagram of each other." << endl;
    }

    return 0;
}