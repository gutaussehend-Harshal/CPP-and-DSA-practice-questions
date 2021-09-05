// Iterators in C++ STL -->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    vector<int> arr = {1, 2, 3, 4, 5};

    // Declaring iterator to a vector
    vector<int>::iterator ptr;

    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = arr.begin(); ptr != arr.end(); ptr++)
    {
        cout << *ptr << " ";
    }
    cout << endl;




    vector<int>::iterator ptr1 = arr.begin();
    // Using advance() to increment iterator position
    // points to 4
    advance(ptr1, 3);
    // Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *ptr1 << " " << endl;




    // Declaring iterators to a vector
    vector<int>::iterator pt = arr.begin();
    vector<int>::iterator ft = arr.end();

    // Using next() to return new iterator
    // points to 4
    auto it = next(pt, 3);

    // Using prev() to return new iterator
    // points to 3
    auto it1 = prev(ft, 3);

    // Displaying iterator position
    cout << "The position of new iterator using next() is : ";
    cout << *it << " ";
    cout << endl;

    // Displaying iterator position
    cout << "The position of new iterator using prev()  is : ";
    cout << *it1 << " ";
    cout << endl;



    vector<int> ar = { 1, 2, 3, 4, 5 };
    vector<int> ar1 = {10, 20, 30}; 
      
    // Declaring iterator to a vector
    vector<int>::iterator ptr2 = ar.begin();
     
    // Using advance to set position
    advance(ptr2, 3);
      
    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar,ptr2));
      
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar) 
        cout << x << " ";
    return 0;
}