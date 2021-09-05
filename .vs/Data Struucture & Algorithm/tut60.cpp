#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    string str = "blloona";
    int b = 0, a = 0, l = 0, o = 0, n = 0;

    int i = 0;
    while (i < str.length())
    {
        if (str[i] == 'b')
        {
            b++;
        }
        else if (str[i] == 'a')
        {
            a++;
        }
        else if (str[i] == 'l')
        {
            l++;
        }
        else if (str[i] == 'o')
        {
            o++;
        }
        else
        {
            n++;
        }
        i++;
    }

    l /= 2;
    o /= 2;
    cout << min({b, a, l, o, n});

    return 0;
}