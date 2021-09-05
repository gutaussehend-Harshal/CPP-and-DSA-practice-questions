#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    // vector<int> v1{10, 20, 30, 40, 50};
    // vector<char> v2(4);
    // vector<int> v3{5, 10};
    // vector<string> v4(3, "hello");

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << endl;
    // }

    // vector<int> v1;
    // cout << "Current capacity is: " << v1.capacity() << endl;
    // v1.push_back(10);
    // cout << "Current capacity is: " << v1.capacity() << endl;
    // v1.push_back(20);
    // cout << "Current capacity is: " << v1.capacity() << endl;
    // v1.push_back(30);
    // cout << "Current capacity is: " << v1.capacity() << endl;

    vector<int> v1;
    cout << "Current capacity is: " << v1.capacity() << endl;
    for (int i = 0; i <= 9; i++)
    {
        v1.push_back(10 * (i + 1));
    }
    cout << "Current capacity is: " << v1.capacity() << endl;
    v1.pop_back();
    cout << "After pop: " << endl;
    cout << "Current capacity is: " << v1.capacity() << endl;
    v1.pop_back();
    cout << "After pop: " << endl;
    cout << "Current capacity is: " << v1.capacity() << endl;
    v1.pop_back();
    cout << "After pop: " << endl;
    cout << "Current capacity is: " << v1.capacity() << endl;
    v1.pop_back();
    cout << "After pop: " << endl;
    cout << "Current capacity is: " << v1.capacity() << endl;


    cout << "The value at inex 3 is: " << v1.at(3) << endl;
    cout << "The front value is: " << v1.front() << endl;
    cout << "The last value is: " << v1.back() << endl;

    vector <int>:: iterator it = v1.begin();
    v1.insert(it+2,35);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
    v1.clear();
    cout << "Current capacity is: " << v1.capacity() << endl;
    cout << "Total no. of elements are: " << v1.size() << endl;
    return 0;
}