#include <bits/stdc++.h>
using namespace std;

// Calculate HCF of two numbers -->

int main()
{
    int a, b, i;
    system("CLS");
    cout << "Enter two numbers: ";
    cin >> a >> b;

    i = a < b ? a : b;
    for (i = a < b ? a : b; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
    }
    cout << "HCF is: " << i << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// // Example 1: Find GCD using while loop

// int main()
// {
//     int n1, n2;
//     cout << "Enter the numbers: " << endl;
//     cin >> n1 >> n2;

//     while (n1 != n2)
//     {
//         if (n1 > n2)
//         {
//             n1 -= n2;
//         }
//         else
//         {
//             n2 -= n1;
//         }
//     }
//     cout << "HCF = " << n1 << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Example: 2. Find HCF/GCD using for loop

// int main()
// {

//     int n1, n2, temp, hcf;
//     cout << "Enter the numbers: " << endl;
//     cin >> n1 >> n2;

//     if (n2 > n1)
//     {
//         temp = n2;
//         n2 = n1;
//         n1 = temp;
//     }

//     for (int i = 1; i <= n2; i++)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     cout << "HCF = " << hcf << endl;

//     return 0;
// }