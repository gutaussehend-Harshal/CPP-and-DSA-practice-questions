#include <iostream>
using namespace std;

// Write a program to count number of words in string.

int main () {
    char str[80];
    cout << "Enter string: " << endl;
    cin.get(str, 80);

    int l;
    for (l = 1; str[l] != '\0'; l++);
    cout << "The length of the string is: " << l << endl;
    
    int words = 0;
    for (int i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
        
    }
    cout << "The number of words in given string are: " << words + 1 << endl;

    return 0;
}