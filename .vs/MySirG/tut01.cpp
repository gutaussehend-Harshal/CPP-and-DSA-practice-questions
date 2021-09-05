#include <bits/stdc++.h>
using namespace std;

// Swapping of two numbers -->

int main()
{   
    system("ClS");
    int a, b, temp;
    cin >> a >> b;

    temp = a; // By using 3rd variable
    a = b;
    b = temp;
    cout << a << " " << b << endl;

    swap(a, b); // By using swap function
    cout << a << " " << b << endl;

    a = a + b; //  Without using 3rd variable
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;

    a = a * b; //  Without using 3rd variable
    b = a / b;
    a = a / b;
    cout << a << " " << b << endl;

    return 0;
}