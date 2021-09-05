#include <bits/stdc++.h>
using namespace std;

// List in C++ Standard Template Library (STL) --> (doubly linked list)

void showList(list<int> g)
{
    list<int>::iterator it;
    for (auto it = g.begin(); it != g.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    system("CLS");
    list<int> gqlist1, gqlist2;
    for (int i = 0; i < 10; i++)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }

    cout << "\nList 1 (gqlist1) is : ";
    showList(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showList(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist2.front() : " << gqlist2.front();
    cout << "\ngqlist2.back() : " << gqlist2.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showList(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showList(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showList(gqlist1);

    cout << "\ngqlist2.reverse() : ";
    gqlist2.reverse();
    showList(gqlist2);

    cout << "\ngqlist1.sort(): ";
    gqlist1.sort();
    showList(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showList(gqlist2);

    // merge operation
    gqlist1.merge(gqlist2);
    cout << "\nList: ";
    for (auto i = gqlist1.begin(); i != gqlist1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // initializing lists
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {4, 5};
    list<int> l3 = {6, 7, 8};

    // transfer all the elements of l2
    l1.splice(l1.begin(), l2);

    // at the beginning of l1
    cout << "list l1 after splice operation" << endl;
    for (auto x : l1)
        cout << x << " ";

    // transfer all the elements of l1
    l3.splice(l3.end(), l1);

    // at the end of l3
    cout << "\nlist l3 after splice operation" << endl;
    for (auto x : l3)
        cout << x << " ";
    return 0;
}