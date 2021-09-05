#include <iostream>
using namespace std;

void sum(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum = " << sum << endl;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    sum(n);

    return 0;
}