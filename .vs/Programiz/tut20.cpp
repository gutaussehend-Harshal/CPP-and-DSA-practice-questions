// #include <iostream>
// using namespace std;

// // Example 1: Find LCM

// int main()
// {

//     int n1, n2, max;
//     cout << "Enter two numbers: " << endl;
//     cin >> n1 >> n2;

//     max = (n1 > n2) ? n1 : n2;

//     do
//     {
//         if (max % n1 == 0 && max % n2 == 0)
//         {
//             cout << "LCM = " << max << endl;
//         }
//         else
//         {
//             max++;
//         }

//     } while (true);

//     return 0;
// }

#include <iostream>
using namespace std;

// Example 2: Find LCM using HCF

int main()
{

    int n1, n2, hcf, lcm, temp;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;

    hcf = n1;
    temp = n2;

    while (hcf != temp)
    {
        if (hcf > temp)
        {
            hcf -= temp;
        }
        else
        {
            temp -= hcf;
        }
    }
    cout << "HCF = " << hcf << endl;

    lcm = (n1 * n2) / hcf;
    cout << "LCM = " << lcm << endl;

    return 0;
}