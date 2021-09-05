#include <iostream>
using namespace std;

//priority queue using LinkedList -->

class Node
{
public:
    int data;
    int priority;
    Node *next;
};

class Queue
{
private:
    Node *head;

public:
    Queue()
    {
        head = NULL;
    }

    void dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void enqueue(int d, int p)
    {
        Node *curr = new Node();
        curr->data = d;
        curr->priority = p;

        if (head == NULL)
        {
            curr->next = head;
            head = curr;
            return;
        }
        else
        {
            Node *start = head;
            if (head->priority < p)
            {
                curr->next = head;
                head = curr;
                return;
            }
            else
            {
                while (start->next != NULL && start->next->priority >= p)
                {
                    start = start->next;
                }
                curr->next = start->next;
                start->next = curr;
            }
        }
    }

    int isEmpty()
    {
        return head == NULL;
    }

    int peek()
    {
        if (head == NULL)
        {   
            cout << "Queue is empty" << " ";
            return -1;
        }
        return head->data;
    }
};

int main()
{
    system("CLS");
    Queue *q = new Queue();
    q->enqueue(3, 2);
    q->enqueue(4, 5);
    q->enqueue(1, 4);
    q->enqueue(2, 5);
    q->enqueue(7, 2);
    q->enqueue(9, 3);
    q->enqueue(10, 2);

    // while (q->isEmpty() != true)
    // {
    //     cout << " " << q->peek();
    //     q->pop();
    // }

    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    q->dequeue();
    q->dequeue();
    cout << "Peek: " << q->peek() << endl;
    

    return 0;
}