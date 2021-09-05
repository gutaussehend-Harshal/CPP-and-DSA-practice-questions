#include <iostream>
using namespace std;

// Sum of two binary -->

int main()
{
    string a = "11";
    string b = "1";

    int sum = 0;
    string result = " ";
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || sum == 1)
    {
        if (i >= 0)
        {
            sum += a[i] - '0';
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
        }
        
        result = to_string(sum % 2) + result;
        sum = sum/2;
        i--,j--;
        
    }
    cout << result << endl;
    return 0;
}