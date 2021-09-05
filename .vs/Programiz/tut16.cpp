// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the integer" << endl;
//     cin >> n;
//     int count = 0;

//     while (n != 0)
//     {
//         if (n % 10 == 0)
//         {
//             count++;
//         }
//         n /= 10;
//     }
//     cout << count << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// Example 1: Display Multiplication table up to 10

int main()
{
    int n;
    cout << "Enter a integer: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }

    return 0;
}