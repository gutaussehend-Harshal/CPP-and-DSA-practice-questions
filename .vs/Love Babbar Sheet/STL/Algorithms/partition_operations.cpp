#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    vector<int> vect = {2, 1, 5, 6, 8, 7};

    // Checking if vector is partitioned
    // using is_partitioned()
    if (is_partitioned(vect.begin(), vect.end(), [](int x)
                       { return x % 2 == 0; }))
    {
        cout << "Vector is partitioned" << endl;
    }
    else
    {
        cout << "Vector is not partitioned" << endl;
    }

    // partitioning vector using partition()
    partition(vect.begin(), vect.end(), [](int x)
              { return x % 2 == 0; });

    // Checking if vector is partitioned
    // using is_partitioned()
    if (is_partitioned(vect.begin(), vect.end(), [](int x)
                       { return x % 2 == 0; }))
    {
        cout << "Now, vector is partitioned after partition operation" << endl;
    }
    else
    {
        cout << "Vector is still not partitioned after partition operation" << endl;
    }

    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (auto value : vect)
    {
        cout << value << " ";
    }
    cout << endl;

    /*                        -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-                            */

    vector<int> vect1 = {2, 1, 5, 6, 8, 7};
    // partitioning vector using stable_partition()
    // in sorted order
    stable_partition(vect1.begin(), vect1.end(), [](int x)
                     { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (auto value : vect1)
    {
        cout << value << " ";
    }
    cout << endl;

    // Declaring iterator
    vector<int>::iterator it1;

    // using partition_point() to get ending position of partition
    auto it = partition_point(vect1.begin(), vect1.end(), [](int x)
                              { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The vector elements returning true for condition are : ";
    for (it1 = vect1.begin(); it1 != it; it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;

    /*                        -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-                            */

    // Initializing vector
    vector<int> v = {2, 1, 5, 6, 8, 7};

    // Declaring vector1
    vector<int> v1;

    // Declaring vector1
    vector<int> v2;

    // Resizing vectors to suitable size using count_if() and resize()
    int n = count_if(v.begin(), v.end(), [](int x)
                     { return x % 2 == 0; });
    cout << n << endl;
    v1.resize(n);
    v2.resize(v.size() - n);

    // Using partition_copy() to copy partitions
    partition_copy(v.begin(), v.end(), v1.begin(), v2.begin(), [](int x)
                   { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The elements that return true for condition are : ";
    for (auto value : v1)
    {
        cout << value << " ";
    }
    cout << endl;

    // Displaying partitioned Vector
    cout << "The elements that return false for condition are : ";
    for (auto value : v2)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}