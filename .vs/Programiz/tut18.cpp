// #include <iostream>
// using namespace std;

// // Example 1: Program to print half pyramid using *

// int main () {
//     int n;
//     cout << "enter the value of n: " << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Example 2: Program to print half pyramid a using numbers

// int main () {
//     int n;
//     cout << "enter the value of n: " << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// Example 4: Inverted half pyramid using *

// int main()
// {
//     int n;
//     cout << "enter the value of n: " << endl;
//     cin >> n;

//     for (int i = n; i >= 1; --i)
//     {
//         for (int j = 1; j <= i; ++j)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

// Example 5: Inverted half pyramid using numbers

int main()
{
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;

    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
