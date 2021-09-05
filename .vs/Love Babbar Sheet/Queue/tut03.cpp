#include <iostream>
using namespace std;
#define N 5
int Queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        Queue[rear] = x;
    }
    else
    {
        rear++;
        Queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << Queue[front] << endl;
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << Queue[i] << endl;
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << Queue[front] << endl;
    }
}

int main()
{

    return 0;
}