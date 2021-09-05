#include <bits/stdc++.h>
using namespace std;
#define no_of_chars 256

// Check whether two strings are anagram of each other --> o(n)

bool areAnagram(char str1[], char str2[])
{
    int count1[no_of_chars] = {0};
    int count2[no_of_chars] = {0};

    int i;
    for (i = 0; str1[i] && str2[i]; i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    if (str1[i] != str2[i])
    {
        return false;
    }

    for (int i = 0; i < no_of_chars; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    system("CLS");
    char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";

    if (areAnagram(str1, str2))
    {
        cout << "The two strings are anagram of each other";
    }
    else
    {
        cout << "The two strings are not anagram of each other";
    }

    return 0;
}