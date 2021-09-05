#include <bits/stdc++.h>
using namespace std;

int reverse(int n, int temp)
{
    if (n == 0)
    {
        return temp;
    }

    temp = (temp * 10) + (n % 10);

    return reverse(n / 10, temp);
}

int main()
{
    int n1 = 12321;
    int n2 = reverse(n1, 0);
    (n1 == n2) ? cout << ("Palinrome") << endl : cout << ("Not palindrome") << endl;

    int m1 = 12;
    int m2 = reverse(m1, 0);
    (m1 == m2) ? cout << ("Palinrome") << endl : cout << ("Not palindrome") << endl;

    int o1 = 88;
    int o2 = reverse(o1, 0);
    (o1 == o2) ? cout << ("Palinrome") << endl : cout << ("Not palindrome") << endl;

    int p1 = 8999;
    int p2 = reverse(p1, 0);
    (p1 == p2) ? cout << ("Palinrome") << endl : cout << ("Not palindrome") << endl;

    return 0;
}