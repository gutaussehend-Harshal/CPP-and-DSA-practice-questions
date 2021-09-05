// Queue in Standard Template Library (STL) -->
#include <bits/stdc++.h>
using namespace std;

void showq(queue<int> g)
{
    while (!g.empty())
    {
        cout << g.front() << " ";
        g.pop();
    }
    // cout << "\n";
}

int main()
{
    system("CLS");
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue gquiz is : ";
    showq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);

    return 0;
}