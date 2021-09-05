#include <bits/stdc++.h>
using namespace std;

// Algorithm Library | C++ Magicians STL Algorithm -->

int main()
{
    system("CLS");
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + size);

    cout << "Vector is: ";
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    sort(vect.begin(), vect.end());

    cout << "\nVector is: ";
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    reverse(vect.begin(), vect.end());

    cout << "\nVector after reversing is: ";
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());

    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());

    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    cout << "\nOccurrences of 20 in vector : ";
    cout << count(vect.begin(), vect.end(), 20);

    // find(vect.begin(), vect.end(), 20) != vect.end() ? cout << "\nElement found" : cout << "\nElement not found";
    if (find(vect.begin(), vect.end(), 20) != vect.end())
    {
        cout << "\nElement found";
    }
    else
    {
        cout << "\nElement not found";
    }

    sort(vect.begin(), vect.end());
    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 20);

    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);

    cout << "\nThe lower bound is at position: ";
    cout << q - vect.begin() << endl;

    cout << "The upper bound is at position: ";
    cout << p - vect.begin() << endl;

    cout << "Vector is: ";
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    // Delete second element of vector
    vect.erase(vect.begin() + 1);
    cout << "\nVector after erasing the element: ";
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    // sorting to enable use of unique()
    sort(vect.begin(), vect.end());

    cout << "\nVector before removing duplicate occurrences: ";
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    // Deletes the duplicate occurrences
    vect.erase(unique(vect.begin(), vect.end()), vect.end());
    cout << "\nVector after deleting duplicates: ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation :\n ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation :\n ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    // Return distance of first to maximum element
    cout << "\nDistance between first to max element: ";
    cout << distance(vect.begin(), max_element(vect.begin(), vect.end()));

    return 0;
}