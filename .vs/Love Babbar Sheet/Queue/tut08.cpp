#include <bits/stdc++.h>
using namespace std;

// Circular queue by using Linked list -->

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x)
    {
        Node *newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if (rear == NULL)
        {
            front = rear = newNode;
            rear->next = front;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
            rear->next = front; // newNode->next = front;
        }
    }

    void dequeue()
    {
        Node *temp = front;
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            front = rear = NULL;
            delete temp;
        }
        else
        {
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }

    void peek()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "\nPeek: " << front->data << endl;
        }
    }

    void display()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Node *temp = front;
            // while (temp->next != front)
            // {
            //     cout << temp->data << " ";
            //     temp = temp->next;
            // }
            // cout << temp->data << endl;

            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp->next != front->next);
        }
    }
};

int main()
{
    system("CLS");
    Queue *q = new Queue();
    q->enqueue(2);
    q->enqueue(-1);
    q->enqueue(5);
    q->display();
    q->dequeue();
    q->peek();

    return 0;
}