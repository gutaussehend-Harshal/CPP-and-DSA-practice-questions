// Find the element in an infinite array -->
#include <bits/stdc++.h>
using namespace std;

int searchInfinite(int a[], int n, int key)
{
    int low = 0;
    int high = 1;

    while (a[high] < key)
    {
        low = high;
        high = 2 * high;
    }
    return binary_search(a, a + n, key);
}

int main()
{
    system("CLS");
    int a[] = {1, 3, 7, 8, 12, 58, 72, 96};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 58;

    cout << searchInfinite(a, n, key);

    return 0;
}