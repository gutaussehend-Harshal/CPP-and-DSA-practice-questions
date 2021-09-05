#include <bits/stdc++.h>
using namespace std;
#define N 100
// Array version -->

class Stack
{
private:
    int data[N];
    int top; // Index inside the array - 0th position
    int minEle;

public:
    Stack()
    {
        top = -1;
    }

    int getMin()
    {
        if (isEmpty())
        {
            // cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            // cout << "Minimum Element in the stack is: " << minEle << endl;
            return minEle;
        }
    }

    void push(int x)
    {
        if (top == N - 1)
        {
            cout << "Error: Stack full" << endl;
            return;
        }

        if (isEmpty())
        {
            top++;
            data[top] = x;
            minEle = x;
        }

        // If new number is less than minEle
        if (x < minEle)
        {
            top++;
            data[top] = (2 * x - minEle);
            minEle = x;
        }

        else
        {
            top++;
            data[top] = x;
        }

        cout << "Number Inserted: " << x << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, pop not allowed ";
        }

        int y = data[top];
        top--;

        // Minimum will change as the minimum element of the stack is being removed.
        if (y < minEle)
        {
            cout << minEle << endl;
            minEle = 2 * minEle - y;
        }

        else
        {
            cout << y << endl;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            // cout << "Stack is empty, peek not allowed ";
            return -1;
        }

        int t = data[top]; // Top element.

        cout << "Top Most Element is: ";
        // If t < minEle means minEle stores value of t.
        if (t < minEle)
        {
            return minEle;
        }
        else
        {
            return t;
        }
        // (t < minEle) ? cout << minEle : cout << t;
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

int main()
{
    system("CLS");

    Stack *stack = new Stack();
    stack->push(3);
    stack->push(5);
    stack->getMin();

    stack->push(2);
    stack->push(1);
    stack->getMin();

    cout << "\nPop: ";
    stack->pop();
    stack->getMin();

    cout << "\nPop: ";
    stack->pop();
    stack->peek();

    cout << endl;
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