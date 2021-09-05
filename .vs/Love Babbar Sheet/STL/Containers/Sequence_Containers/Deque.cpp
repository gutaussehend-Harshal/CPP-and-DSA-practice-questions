// Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

#include <bits/stdc++.h>
using namespace std;

void showDq(deque<int> g)
{
    for (auto i = g.begin(); i != g.end(); i++)
    {
        cout << *i << " ";
    }
    // cout << endl;
}

int main()
{
    system("CLS");
    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);

    cout << "The deque gquiz is : ";
    showDq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.max_size() : " << gquiz.max_size();

    cout << "\ngquiz.at(2) : " << gquiz.at(2);
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop_front() : ";
    gquiz.pop_front();
    showDq(gquiz);

    cout << "\ngquiz.pop_back() : ";
    gquiz.pop_back();
    showDq(gquiz);

    return 0;
}