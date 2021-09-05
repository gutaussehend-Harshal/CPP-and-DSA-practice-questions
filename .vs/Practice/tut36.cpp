#include <bits/stdc++.h>
using namespace std;
int top = -1;

void push(int *arr, int n)
{
    int x;
    cout << "Enter data: ";
    cin >> x;
    if (top == n - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = x;
    }
}

void pop(int *arr)
{
    int x;

    if (top == -1)   //(is_empty())
    {
        cout << "Underflow" << endl;
    }
    else
    {
        x = arr[top];
        top--;
        cout << "Pop data: " << x << endl;
    }
}

void peek(int *arr)
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top data: " << arr[top] << endl;
    }
}

void display(int *arr)
{
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: ";
    cin >> n;
    int arr[n];

    push(arr, n);
    push(arr, n);
    push(arr, n);
    push(arr, n);
    push(arr, n);
    pop(arr);
    pop(arr);
    pop(arr);
    pop(arr);
    pop(arr);
    peek(arr);
    display(arr);

    return 0;
}