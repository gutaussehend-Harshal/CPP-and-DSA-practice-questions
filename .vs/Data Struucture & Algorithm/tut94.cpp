#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertAtStart(int data)
    {
        Node *curr = new Node();
        curr->data = data;
        curr->next = head;
        head = curr;
    }

    void insertAtEnd(int data)
    {
        Node *curr = new Node();
        curr->data = data;

        if (head == NULL)
        {
            head = curr;
        }
        else
        {
            Node *prev = head;
            while (prev->next != NULL)
            {
                prev = prev->next;
            }
            prev->next = curr;
            curr->next = NULL;
        }
    }

    void insertAtPosition(int data, int index)
    {
        Node *curr = new Node();
        curr->data = data;

        int l = len();
        if (index == 0)
        {
            curr->next = head;
            head = NULL;
        }
        else if (index < 0 || index > l)
        {
            cout << "Invalid index" << endl;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < index - 1; i++)
            {
                prev = prev->next;
            }
            curr->next = prev->next;
            curr->next = curr;
        }
    }

    void deleteAtStart()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *curr;
            curr = head;
            head = curr->next;
            delete curr;
        }
    }

    void deleteAtEnd()
    {
        Node *curr = head;
        Node *prev = head;

        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete curr;
    }

    void deleteAtPosition(int index)
    {
        if (index == 0)
        {
            deleteAtStart();
        }
        else
        {
            int length = len();
            if (index > length - 1 || index < 0)
            {
                cout << "Invalid input position" << endl;
            }
            else
            {
                Node *prev, *curr;
                prev = head;
                curr = head;

                for (int i = 0; i < index; i++)
                {
                    prev = curr;
                    curr = curr->next;
                }
                prev->next = curr->next;
                delete curr;
            }
        }
    }

    void reverseList()
    {
        Node *prev, *curr, *last;
        last = head;
        curr = head,
        prev = NULL;

        while (last != NULL)
        {
            last = last->next;
            curr->next = prev;
            prev = curr;
            curr = last;
        }
        head = prev;
    }

    int len()
    {
        Node *curr = head;
        int count = 0;
        while (curr != NULL)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }

    void print()
    {
        cout << "Head->";
        for (Node *i = head; i != NULL; i = i->next)
        {
            cout << i->data << "->";
        }
        cout << "Null" << endl;
    }
};

int main()
{
    LinkedList *ll = new LinkedList();
    // ll->insertAtStart(10);
    // ll->insertAtStart(20);
    // ll->insertAtStart(30);
    // ll->insertAtStart(40);
    // ll->insertAtStart(50);
    // ll->print();

    // cout << endl;

    ll->insertAtEnd(10);
    ll->insertAtEnd(20);
    ll->insertAtEnd(30);
    ll->insertAtEnd(40);
    ll->insertAtEnd(50);
    ll->print();
    ll->reverseList();
    ll->print();

    // ll->insertAtPosition(100, 5);
    // ll->print();

    // ll->deleteAtStart();
    // ll->print();
    // ll->deleteAtEnd();
    // ll->print();
    // ll->deleteAtPosition(1);
    // ll->print();
    return 0;
}