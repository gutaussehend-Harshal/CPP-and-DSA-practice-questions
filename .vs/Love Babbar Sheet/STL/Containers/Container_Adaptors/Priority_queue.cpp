// Priority Queue in C++ Standard Template Library (STL) -->
#include <bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int> gquiz)
{
    while (!gquiz.empty())
    {
        cout << gquiz.top() << " ";
        gquiz.pop();
    }
    // cout << endl;
}

// How to create a min heap for priority queue?
// C++ provides below syntax for the same.

// Syntax to create a min heap for priority queue
// priority_queue <int, vector<int>, greater<int>> g = gq;

void showPq(priority_queue<int, vector<int>, greater<int>> g)
{
    while (!g.empty())
    {
        cout << g.top() << " ";
        g.pop();
    }
    // cout << endl;
}

int main()
{
    system("CLS");
    priority_queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    cout << "The priority queue g is : ";
    showpq(gquiz);

    cout << "\ng.size() : " << gquiz.size();
    cout << "\ng.top() : " << gquiz.top();

    cout << "\ng.pop() : ";
    gquiz.pop();
    showpq(gquiz);
    cout << endl;

    /*       -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*             */
    priority_queue<int, vector<int>, greater<int>> g;
    g.push(10);
    g.push(30);
    g.push(20);
    g.push(5);
    g.push(1);

    cout << "The priority queue g is : ";
    showPq(g);

    cout << "\ng.size() : " << g.size();
    cout << "\ng.top() : " << g.top();

    cout << "\ng.pop() : ";
    g.pop();
    showPq(g);

    return 0;
}