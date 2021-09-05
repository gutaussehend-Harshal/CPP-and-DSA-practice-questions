#include <bits/stdc++.h>
using namespace std;

// Set in C++ Standard Template Library (STL) -->

int main()
{
    system("CLS");
    set<int, greater<int>> s1;

    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    set<int, greater<int>>::iterator itr;
    cout << "The set s1 is : ";
    for (auto itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());

    cout << "The set s2 is : ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // remove all elements up to 30 in s1
    cout << "s1 after removal of elements greater than 30 : " << endl;
    s1.erase(s1.begin(), s1.find(30));
    for (auto itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // remove all elements up to 30 in s2
    cout << "s2 after removal of elements less than 30 : " << endl;
    s2.erase(s2.begin(), s2.find(30));
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "s2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl;

    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;

    int arr[] = {14, 12, 15, 11, 10};

    // initializes the set from an array
    set<int> s(arr, arr + 5);

    // check if 11 is present or not
    if (s.count(11))
        cout << "11 is present in the set\n";
    else
        cout << "11 is not present in the set\n";

    // checks if 18 is present or not
    if (s.count(18))
        cout << "18 is present in the set\n";
    else
        cout << "18 is not present in the set\n";




    
    set<int> S;

    S.insert(1);
    S.insert(4);
    S.insert(2);
    S.insert(5);
    S.insert(3);

    // iterator pointing to
    // position where 2 is
    auto pos = S.find(3);

    // prints the set elements
    cout << "The set elements after 3 are: ";
    for (auto it = pos; it != S.end(); it++)
        cout << *it << " ";

    return 0;
}