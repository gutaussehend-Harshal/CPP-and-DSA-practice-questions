#include <iostream>
using namespace std;

int main()
{
    string s;
    int flag = 0;
    char c;
    cout << "String " << endl;
    getline(cin, s);
    cin >> c;

    for (int i = 0; i < s.length(); i++)
    {
        // cout << s.at(i); 
        if (c == s.at(i))
        {
            flag++;
        }
    }

    cout << flag << endl;
    return 0;
}