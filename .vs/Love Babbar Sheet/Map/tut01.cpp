// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     system("CLS");
//     multimap<int, int> gquiz1;
//     gquiz1.insert(pair<int, int>(1, 40));
//     gquiz1.insert(pair<int, int>(2, 30));
//     gquiz1.insert(pair<int, int>(3, 60));
//     gquiz1.insert(pair<int, int>(4, 20));
//     gquiz1.insert(pair<int, int>(5, 50));
//     gquiz1.insert(pair<int, int>(6, 50));
//     gquiz1.insert(pair<int, int>(7, 10));
//     gquiz1.insert(pair<int, int>(7, 90));
//     gquiz1.insert(pair<int, int>(7, 100));

//     map<int, int>::iterator itr;

//     cout << "Key" << "  " << "element" << endl;
//     for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
//     {
//         cout << itr->first << "     " << itr->second << endl;
//     }
//     cout << endl;

//     int num = gquiz1.erase(7);
//     cout << num << " removed" << endl;

//     cout << "Key" << "  " << "element" << endl;
//     for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
//     {
//         cout << itr->first << "     " << itr->second << endl;
//     }
//     cout << endl;

//     cout << gquiz1.lower_bound(5)->first << endl;
//     cout << gquiz1.lower_bound(5)->second << endl;

//     cout << gquiz1.upper_bound(5)->first << endl;
//     cout << gquiz1.upper_bound(5)->second << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s)
{
    int low = 0;
    int high = s.size() - 1;

    while (low <= high)
    {
        if (s[low] != s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    system("CLS");
    string s = "madam";
    if (ispalindrome(s))
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "String is not palindrome" << endl;
    }

    return 0;
}