#include <iostream>
using namespace std;

// 
int main()
{
    char string[80];
    cout << "Enter string: " << endl;
    cin.getline(string, 80);
    int count;

    int l;
    for (l = 0; string[l] != '\0'; l++)
        ;
    cout << "The length of the string is: " << l << endl;

    for (int i = 0; i < l; i++)
    {
        count = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (string[i] == string[j] && string[i] != ' ')
            {
                count++;
                string[j] = '0';
            }
        }

        if (count > 1 && string[i] != '0')
        {
            cout << string[i] << endl;
        }
    }

    return 0;
}