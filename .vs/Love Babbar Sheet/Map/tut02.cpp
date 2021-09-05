// #include <bits/stdc++.h>
// using namespace std;

// int sum(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n + sum(n - 1);
// }

// int fact(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// void print(int n)
// {
//     if (n < 0)
//     {
//         return;
//     }
//     cout << n << " ";

//     print(n - 1);
// }

// void printFun(int n)
// {
//     if (n < 1)
//     {
//         return;
//     }
//     else
//     {
//         cout << n << " ";
//         printFun(n - 1);
//         cout << n << " ";
//         cout << n << " ";
//         return;
//     }
// }

// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1 || n == 2)
//     {
//         return 1;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//     int n;
//     system("CLS");
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Sum of " << n << " natural numbers is: " << sum(n) << endl;
//     cout << "Factorial of " << n << " is: " << fact(n) << endl;
//     print(n);
//     cout << endl;
//     printFun(n);
//     cout << endl;
//     cout << "Fibonacci series of " << n << " numbers is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << fib(i) << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int fun1(int x, int y)
// {
//     if (x == 0)
//         return y;
//     else
//         return fun1(x - 1, x + y);
// }

// int fun1(int n)
// {
// if(n == 1)
//     return 0;
// else
//     return 1 + fun1(n/2);
// }

// void fun2(int n)
// {
// if(n == 0)
//     return;

// fun2(n/2);
// cout << n%2 << endl;
// }

// int main()
// {
//     int x, y;
//     system("CLS");
//     cin >> x >> y;

//     cout << fun1(x, y) << endl;
//     cout << fun1(5) << endl;
//     fun2(5);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    cout << LONG_MAX << endl;
    cout << LONG_MIN << endl;
    cout << LLONG_MAX << endl;
    cout << LLONG_MIN << endl;
    return 0;
}