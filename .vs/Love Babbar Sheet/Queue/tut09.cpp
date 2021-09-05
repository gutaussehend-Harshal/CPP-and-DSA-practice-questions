#include <bits/stdc++.h>
using namespace std;

// Priority queue -->

int main()
{   
    system("CLS");
    priority_queue<int> p;
    p.push(5);
    p.push(100);
    p.push(10);
    p.push(70);
    p.push(80);

    // cout << "Top: " << p.top() << endl;
    // p.pop();
    // cout << "Top: " << p.top() << endl;
    // p.pop();
    // cout << "Top: " << p.top() << endl;
    // p.pop();
    // cout << "Top: " << p.top() << endl;
    // p.pop();
    // cout << "Top: " << p.top() << endl;
    // p.pop();

    // while (!p.empty())
    // {
    //     cout << p.top() << " ";
    //     p.pop();
    // }
    
    cout << "Size: " << p.size() << endl;


    // cout << "Top: " << p.top() << endl; 


    return 0;
}