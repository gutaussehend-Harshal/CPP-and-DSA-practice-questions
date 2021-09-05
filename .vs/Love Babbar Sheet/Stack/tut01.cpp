#include <bits/stdc++.h>
using namespace std;
// #define N 5;
// int stack[];
int top = -1;

// Implementation of stack using array -->

void push(int stack[], int N) // int stack[], int N
{
    int x;
    cout << "Enter data: ";
    cin >> x;
    if (top == N - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop(int stack[]) // int stack[]
{
    int item;
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        item = stack[top];
        top--;
        cout << item << endl;
    }
}

void peek(int stack[]) //int stack[]
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << stack[top] << endl;
    }
}

void display(int stack[]) // int stack[]
{
    int i;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
}

int main()
{
    int ch;
    system("CLS");
    int N;
    cout << "Enter size of array: ";
    cin >> N;
    int stack[N];

    do
    {
        cout << "Enter choice: 1->push     2->pop       3->peek     4->display" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            push(stack, N); // stack , N
            break;
        case 2:
            pop(stack); // stack
            break;
        case 3:
            peek(stack); // stack
            break;
        case 4:
            display(stack); // stack
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

    } while (ch != 0);

    return 0;
}