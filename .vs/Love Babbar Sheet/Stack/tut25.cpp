#include <bits/stdc++.h>
using namespace std;

// Implement 2 stack in an array -->

class TwoStacks
{
private:
    int size;
    int *arr;
    int top1, top2;

public:
    TwoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack overflow" << endl;
            return;
        }
    }

    void push2(int x)
    {
        if (top2 - 1 > top1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack overflow" << endl;
            return;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }
};

int main()
{   
    system("CLS");
    TwoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "Pop element from stack1 " << ts.pop1() << endl;
    cout << "Pop element from stack1 " << ts.pop1() << endl;
    cout << "Pop element from stack1 " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Pop element from stack2 " << ts.pop2() << endl;
    cout << "Pop element from stack2 " << ts.pop2() << endl;
    cout << "Pop element from stack2 " << ts.pop2() << endl;
    cout << "Pop element from stack2 " << ts.pop2() << endl;
    cout << "Pop element from stack2 " << ts.pop2() << endl;

    return 0;
}