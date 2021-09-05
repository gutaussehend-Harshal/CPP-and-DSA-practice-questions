#include <bits/stdc++.h>
using namespace std;
#define N 100
char data[N];
int top = -1;
// Array version -->

class Stack
{
public:
    void push(char d)
    {
        if (top == N - 1)
        {
            cout << "Error: Stack full" << endl;
            return;
        }

        top++;
        data[top] = d;
    }

    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, peek not allowed ";
            return -1;
        }

        char val = data[top];
        top--;
        return val;
    }

    char peek()
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
            cout << data[i] << " ";
        }
        cout << "\n-----End of Stack-----" << endl;
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

int main()
{
    system("CLS");

    Stack *stack = new Stack();
    stack->push('.');
    stack->push('-');
    stack->push('.');
    stack->push('-');
    stack->push('.');
    stack->push('-');
    stack->push('.');
    stack->push('-');

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