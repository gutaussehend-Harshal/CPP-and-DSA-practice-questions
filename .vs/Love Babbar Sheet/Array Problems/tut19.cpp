#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    vector<int> v1 = {100, 100, 100};
    vector<int> v2 = {200,200,200,200,200};

    v1.swap(v2);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    
    return 0;
}