// Unordered Sets in C++ Standard Template Library -->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    unordered_set<string> stringSet;
    stringSet.insert("code");
    stringSet.insert("in");
    stringSet.insert("c++");
    stringSet.insert("is");
    stringSet.insert("fast");

    string key = "slow";

    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key
    if (stringSet.find(key) == stringSet.end())
    {
        cout << key << " not found" << endl;
    }
    else
    {
        cout << "Found " << key << endl;
    }

    string key1 = "c++";
    if (stringSet.find(key1) == stringSet.end())
    {
        cout << key1 << " not found" << endl;
    }
    else
    {
        cout << "Found " << key1 << endl;
    }

    // now iterating over whole set and printing its content
    cout << "All elements : ";
    unordered_set<string>::iterator itr;
    for (auto itr = stringSet.begin(); itr != stringSet.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int n = sizeof(arr) / sizeof(int);

    unordered_set<int> inset;
    unordered_set<int> duplicates;

    for (int i = 0; i < n; i++)
    {
        // if element is not there then insert that
        if (inset.find(arr[i]) == inset.end())
        {
            inset.insert(arr[i]);
        }
        // if element is already there then insert into duplicate set
        else
        {
            duplicates.insert(arr[i]);
        }
    }

    // printing the result
    cout << "Duplicate item are : ";
    unordered_set<int>::iterator itr1;

    // iterator itr loops from begin() till end()
    for (itr1 = duplicates.begin(); itr1 != duplicates.end(); itr1++)
        cout << *itr1 << " ";

    // printing the result
    cout << "\ninset item are : ";
    // unordered_set<int>::iterator itr1;
    // iterator itr loops from begin() till end()
    for (itr1 = inset.begin(); itr1 != inset.end(); itr1++)
        cout << *itr1 << " ";

    return 0;
}