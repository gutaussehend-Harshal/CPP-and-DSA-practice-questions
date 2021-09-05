#include <iostream>
using namespace std;

// Rotate matrix by 90 -->

int main()
{
    int n, i, j;

    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The matrix is:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    //first transpose the square matrix
    //	int temp;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "After transpose the matrix is:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n / 2); j++)
        {
            swap(arr[i][j], arr[i][(n - 1 - j)]);
        }
    }
    //	for(i=0;i<m/2;i++)
    //	{
    //		for(j=0;j<n-i-1;j++)
    //		{
    //			temp=arr[i][j];
    //			arr[i][j]=arr[n-1-j][i];
    //			arr[n-1-i][n-1-j]=arr[n-1-j][i];
    //			arr[j][n-1-i]=temp;
    //		}
    //	}
    cout << "After rotate by 90 the matrix is:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}