#include <iostream>
using namespace std;

// Circular Linked list -->

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *tail;

public:
    LinkedList()
    {
        tail = NULL;
    }

    void insertAtBeg(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (tail == NULL)
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (tail == NULL)
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAtPos(int pos, int data)
    {
        int i = 1;
        int l = length();

        if (pos < 0 || pos > l)
        {
            cout << "Insertion not possible" << endl;
        }
        else if (pos == 1)
        {
            insertAtBeg(data);
        }
        else
        {
            Node *newNode = new Node();
            newNode->data = data;
            newNode->next = NULL;
            Node *temp = tail->next;
            // temp = tail->next;

            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void deleteFromBeg()
    {
        Node *temp;
        temp = tail->next;
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
        }
        else if (temp->next == temp) // tail->next = tail;
        {
            tail = NULL;
            delete temp;
        }
        else
        {
            tail->next = temp->next;
            delete temp;
        }
    }

    void deleteFromEnd()
    {
        Node *current, *previous;
        current = tail->next;

        if (tail == NULL)
        {
            cout << "List is empty" << endl;
        }
        else if (current->next == current)
        {
            tail = NULL;
            delete current;
        }
        else
        {
            while (current->next != tail->next)
            {
                previous = current;
                current = current->next;
            }
            previous->next = tail->next;
            tail = previous;
            delete current;
        }
    }

    void deleteFromPos(int pos)
    {
        Node *current, *nextNode;
        int i = 1, l = length();
        current = tail->next;

        if (pos < 0 || pos > l)
        {
            cout << "Deletion not possible" << endl;
        }
        else if (pos == 1)
        {
            deleteFromBeg();
        }
        else
        {
            while (i < pos - 1)
            {
                current = current->next;
                i++;
            }
            nextNode = current->next;
            current->next = nextNode->next;
            delete nextNode;
        }
    }

    void reverse()
    {
        Node *current, *previous, *nextNode;
        current = tail->next;
        nextNode = current->next;

        if (tail == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            while (current != tail)
            {
                previous = current;
                current = nextNode;
                nextNode = current->next;
                current->next = previous;
            }
            nextNode->next = tail;
            tail = nextNode;
        }
    }

    void display()
    {
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = tail->next;
            // while (temp->next != tail->next)
            // {
            //     cout << temp->data << " ";
            //     temp = temp->next;
            // }
            // cout << temp->data << endl;
            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != tail->next);
        }
        cout << endl;
    }

    int length()
    {
        int count = 0;
        Node *temp = tail->next;
        do
        {
            temp = temp->next;
            count++;
        } while (temp != tail->next);
        return count;
    }
};

int main()
{
    system("CLS");
    LinkedList *ll = new LinkedList();
    ll->insertAtBeg(4);
    ll->insertAtBeg(2);
    ll->insertAtBeg(1);
    ll->insertAtBeg(5);
    ll->insertAtBeg(7);
    ll->insertAtEnd(10);
    ll->insertAtPos(3, 50);
    ll->deleteFromBeg();
    ll->deleteFromEnd();
    ll->deleteFromPos(2);
    ll->reverse();

    ll->display();
    return 0;
}