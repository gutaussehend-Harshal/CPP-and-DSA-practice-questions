// #include <iostream>
// using namespace std;

// int main () {
//     string str1, str2;
//     cout << "Enter the string: " << endl;
//     getline(cin, str1);

//     str2 = str1;
//     cout << "str1 = " << str1 << endl;
//     cout << "str2 = " << str2 << endl;

//     return 0;
// }

#include <iostream>
#include <cstring>

// Example 1: Copy String Object

using namespace std;

int main()
{
    char s1[100], s2[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 100);

    strcpy(s2, s1);

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    return 0;
}