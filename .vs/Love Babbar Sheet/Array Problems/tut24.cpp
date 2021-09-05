#include <bits/stdc++.h>
using namespace std;

void print(array<int, 6> harshal)
{
    for (int i = 0; i < harshal.size(); i++)
    {
        cout << harshal[i] << " ";
    }
}

int main()
{
    system("CLS");
    // int n = 100230;
    // int count = 0;

    // while (n > 0)
    // {
    //     if (n % 10 == 0)
    //     {
    //         count++;
    //     }
    //     n /= 10;
    // }
    // cout << count << endl;

    array<int, 6> harshal = {1, 2, 3, 4, 5, 6};
    print(array<int, 6> harshal);
    return 0;
}