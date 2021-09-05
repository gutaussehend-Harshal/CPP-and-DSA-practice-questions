#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class Queue
{
    node *front;
    node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data)
    {
        node *newNode = new node();
        newNode->data = data;
        newNode->next = NULL;

        if (front == NULL && rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            node *temp = front;
            // cout << front->data << endl;
            front = front->next;
            delete temp;
        }
    }

    void peek()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            cout << front->data << endl;
        }
    }

    void display()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            node *temp = front;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Queue *q = new Queue();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->display();
    cout << endl;
    q->enqueue(5);
    q->display();

    cout << "\nThe dequeue element is: ";
    q->dequeue();
    q->display();
    // cout << "The dequeue element is: ";
    // q->dequeue();

    // cout << "The peek element is: ";
    // q->peek();

    return 0;
}