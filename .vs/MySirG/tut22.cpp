#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, even_sum = 0, odd_sum = 0;
    system("CLS");
    cout << "Enter a size: ";   // 10 -> 2 5 7 8 6 1 4 9 3 11
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
        else
        {
            odd_sum += arr[i];
        }
    }
    cout << "The sum of even numbers is: " << even_sum << endl;
    cout << "The sum of odd numbers is: " << odd_sum << endl;

    return 0;
}