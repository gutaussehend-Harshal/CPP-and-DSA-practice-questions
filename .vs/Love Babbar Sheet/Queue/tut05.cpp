#include <iostream>
using namespace std;
#define N 20
int arr[N];

class Queue
{
private:
    // int arr[N];
    int front;
    int rear;

public:
    Queue()
    {
        // arr = new int[N];
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == N - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
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
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    system("CLS");
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    q.enqueue(5);
    cout << "The queue after enqueue an element: ";
    q.display();

    cout << q.peek() << endl;
    q.dequeue();

    cout << "The queue after dequeue an element: ";
    q.display();

    return 0;
}