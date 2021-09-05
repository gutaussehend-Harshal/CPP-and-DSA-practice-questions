#include <bits/stdc++.h>
using namespace std;
#define N 20
int Q[N], Pr[N];
int rear = -1, front = -1;

void enqueue(int data, int p)
{
    int i;
    if ((front == 0) && (rear == N - 1)) //Check if Queue is full
        cout << "Queue is full";
    else
    {
        if (front == -1) //if Queue is empty
        {
            front = rear = 0;
            Q[rear] = data;
            Pr[rear] = p;
        }
        else if (rear == N - 1) //if there there is some elemets in Queue
        {
            for (i = front; i <= rear; i++)
            {
                Q[i - front] = Q[i];
                Pr[i - front] = Pr[i];
                rear = rear - front;
                front = 0;
                for (i = rear; i > front; i--)
                {
                    if (p > Pr[i])
                    {
                        Q[i + 1] = Q[i];
                        Pr[i + 1] = Pr[i];
                    }
                    else
                        break;
                    Q[i + 1] = data;
                    Pr[i + 1] = p;
                    rear++;
                }
            }
        }
        else
        {
            for (i = rear; i >= front; i--)
            {
                if (p > Pr[i])
                {
                    Q[i + 1] = Q[i];
                    Pr[i + 1] = Pr[i];
                }
                else
                    break;
            }
            Q[i + 1] = data;
            Pr[i + 1] = p;
            rear++;
        }
    }
}
void print()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        cout << "Element = " << Q[i] << " Priority = " << Pr[i] << endl;
    }
    cout << endl;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue is Empty";
    }
    else
    {
        cout << "deleted Element = " << Q[front] << " Its Priority = " << Pr[front] << endl;
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}

int main()
{
    system("CLS");
    enqueue(3, 2);
    enqueue(4, 5);
    enqueue(1, 4);
    enqueue(2, 5);
    enqueue(7, 2);
    enqueue(9, 3);
    enqueue(10, 2);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}