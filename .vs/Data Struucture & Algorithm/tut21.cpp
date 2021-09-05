#include <iostream>
using namespace std;

int main () {
    int a[] = {1,2,3,4,10};
    int b[] = {1,2,3,4,5};

    int m = sizeof(a)/sizeof(int);
    int n = sizeof(b)/sizeof(int);

    int ans[m];
    int s = 0;
    int carry = 0;

    for (int i = m - 1; i >= 0; i--)
    {
        s = a[i] + b[i] + carry;
        ans[i] = (s % 10);
        carry = s / 10;

    }
    cout << "[ ";

    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}