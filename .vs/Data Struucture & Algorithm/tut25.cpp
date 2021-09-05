#include<iostream> 
using namespace std;
//decimal to binary

int main()
{
    int num; 
    cout << "Enter the number : " << endl;
    cin >> num;

    int rem[num];
    int i = 0;

    while (num > 0)
    {
        rem[i] = num % 2;
        num = num / 2;
        i++;
    }

    cout << "Display array : ";
    cout << "[ ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << rem[j] << " ";
    }
    cout << " ]";
    return 0;
}