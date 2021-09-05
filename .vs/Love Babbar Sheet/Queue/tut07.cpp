#include <bits/stdc++.h>
using namespace std;
#define n 5

// Circular queue using an array -->

class Queue
{
private:
    int front = -1;
    int rear = -1;
    int queue[n];

public:
    void enqueue(int x)
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = x;
        }
        else if (((rear + 1) % n) == front)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear = ((rear + 1) % n);
            queue[rear] = x;
        }
    }

    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            cout << "Dequeue element is: " << queue[front] << endl;
            front = ((front + 1) % n);
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
            cout << "Peek: " << queue[front] << endl;
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
            int i = front;
            while (i != rear)
            {
                cout << queue[i] << " ";
                i = ((i + 1) % n);
            }
            cout << queue[rear] << endl;

            // for (int i = 0; i != rear; i = ((i + 1) % n))       // i++
            // {
            //     cout << queue[i] << " ";
            // }
            // cout << queue[rear] << endl;

            //     do
            //     {
            //         cout << queue[i] << " ";
            //         i = ((i + 1) % n);
            //     } while (i != rear);
            //     cout << queue[rear] << endl;
            // }
            // cout << endl;
        }
    }
};
int main()
{
    system("CLS");
    Queue *q = new Queue();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);
    q->display();
    q->dequeue();
    // q->display();
    q->enqueue(6);
    q->display();

    return 0;
}