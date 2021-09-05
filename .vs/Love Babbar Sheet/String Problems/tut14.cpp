#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int fibIterative(int n)
{
    int a, b, c;
    a = -1;
    b = 1;

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

void fibIterative1(int n)
{
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    system("CLS");
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "The factorial of " << n << " is: ";
    cout << factorial(n) << endl;

    cout << "The fibonacci of " << n << " is: ";
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    cout << endl;

    cout << "The fibonacci of " << n << " is: ";
    cout << fibIterative(n) << endl;

    cout << "The fibonacci of " << n << " is: ";
    fibIterative1(n);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     system("CLS");
//     char s[] = {"Harshal Amrut Patil"};
//     int n = sizeof(s)/sizeof(s[0]);

//     stack<char> st;

//     for (int i = 0; i < n; i++)
//     {
//         st.push(s[i]);
//     }

//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }