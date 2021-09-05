#include <bits/stdc++.h>
using namespace std;
#define N 5
// Array version -->

class Stack
{
private:
    int data[N];
    int top; // Index inside the array - 0th position

public:
    Stack()
    {
        top = -1;
    }

    void push(int d)
    {
        if (top == N - 1)
        {
            cout << "Error: Stack full" << endl;
            return;
        }

        top++;
        data[top] = d;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, pop not allowed ";
            return -1;
        }

        int val = data[top];
        top--;
        return val;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, peek not allowed ";
            return -1;
        }

        return data[top];
    }

    void print()
    {
        cout << "-----Stack-----" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << data[i] << endl;
        }
        cout << "-----End of Stack-----" << endl;
    }

    bool isEmpty()
    {
        // if (top == -1)
        // {

        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        // return false;
        return top == -1;
    }
};

// void localFunc(int &a, int b)
// {
//     a = a * 2;
//     b = b * 2;
// }

int main()
{
    system("CLS");
    // int a = 10, b = 10;
    // localFunc(a, b);
    // cout << "a = " << a << " " << "b = " << b << endl;

    Stack *stack = new Stack();
    stack->push(10);
    stack->push(20);
    stack->push(200);
    stack->push(150);
    stack->push(999);

    // stack->print();
    cout << "Peek: " << stack->peek() << endl;

    cout << "Pop: " << stack->pop() << endl;
    stack->print();

    if (stack->isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}