// std:: valarray class in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    valarray<int> varr = {10, 2, 20, 1, 30};
    cout << "The valarray is: ";
    for (auto value : varr)
    {
        cout << value << " ";
    }
    cout << endl;

    // Declaring new valarray
    valarray<int> varr1;

    // Using apply() to increment all elements by 5
    varr1 = varr.apply([](int x)
                       { return x = x + 5; });

    // Displaying new elements value
    cout << "The new valarray with manipulated values is : ";
    for (int &x : varr1)
    {
        cout << x << " ";
    }
    cout << endl;

    // Displaying sum of both old and new valarray
    cout << "The sum of old valarray is : ";
    cout << varr.sum() << endl;
    cout << "The sum of new valarray is : ";
    cout << varr1.sum() << endl;

    /*                  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*                         */

    // Displaying largest element of valarray
    cout << "The largest element of valarray is : ";
    cout << varr.max() << endl;

    // Displaying smallest element of valarray
    cout << "The smallest element of valarray is : ";
    cout << varr.min() << endl;

    /*                  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*                         */

    // Initializing valarray
    valarray<int> v1 = {10, 2, 20, 1, 30};

    // Declaring new valarray
    valarray<int> v2;

    // using shift() to shift elements to left
    // shifts valarray by 2 position
    // If the number is positive, left-shift is applied, if number is negative, right-shift is applied.
    v2 = v1.shift(2);

    // Displaying elements of valarray after shifting
    cout << "The new valarray after shifting is : ";
    for (auto value : v2)
    {
        cout << value << " ";
    }
    cout << endl;

    // using cshift() to circulary shift elements to right
    // rotates valarray by 3 position
    // If the number is positive, left-circular shift is applied, if number is negative, right-circular shift is applied.
    v2 = v1.cshift(-3);

    // Displaying elements of valarray after circular shifting
    cout << "The new valarray after circular shifting is : ";
    for (auto value : v2)
    {
        cout << value << " ";
    }
    cout << endl;

    /*                  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*                         */

    // Initializing 1st valarray
    valarray<int> h1 = {1, 2, 3, 4};

    // Initializing 2nd valarray
    valarray<int> h2 = {2, 4, 6, 8};

    // Displaying valarrays before swapping
    cout << "The contents of 1st valarray before swapping are : ";
    for (auto x : h1)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "The contents of 2nd valarray before swapping are : ";
    for (auto x : h2)
    {
        cout << x << " ";
    }
    cout << endl;

    // Use of swap() to swap the valarrays
    h1.swap(h2);

    // Displaying valarrays after swapping
    cout << "The contents of 1st valarray after swapping are : ";
    for (auto x : h1)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "The contents of 2nd valarray after swapping are : ";
    for (auto x : h2)
    {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}