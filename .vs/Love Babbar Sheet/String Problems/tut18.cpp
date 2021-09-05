// C++ program to print all possible strings of length k
#include <bits/stdc++.h>
using namespace std;

void printAllKLengthRec(char set[], string str, int n, int k)
{
    if (k == 0)
    {
        cout << str << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        string newStr;
        newStr = str + set[i];
        // cout << newStr << endl;

        printAllKLengthRec(set, newStr, n, k - 1);
    }
}

int main()
{
    system("CLS");
    cout << "First Test" << endl;
    char set1[] = {'a', 'b'};
    string str = "";
    int k = 3;
    printAllKLengthRec(set1, str, 2, k);

    cout << "\nSecond Test\n";
    char set2[] = {'a', 'b', 'c', 'd'};
    k = 1;
    printAllKLengthRec(set2, str, 4, k);

    return 0;
}
