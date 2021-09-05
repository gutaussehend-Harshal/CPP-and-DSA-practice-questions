#include <bits/stdc++.h>
using namespace std;

// Implementation of doubly linked list -->

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Linkedlist
{
private:
    Node *head;
    Node *tail;

public:
    Linkedlist()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtBeg(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtPos(int pos, int data)
    {
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
            newNode->prev = NULL;

            Node *temp = head;
            int i = 1;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->next->prev = newNode;
        }
    }

    void deleteFromBeg()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else
        {
            temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }

    void deleteFromEnd()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            temp = tail;
            tail->prev->next = NULL;
            tail = tail->prev;
            // tail->next = NULL;
            delete temp;
        }
    }

    void deleteFromPos(int pos)
    {
        if (pos == 1)
        {
            deleteFromBeg();
        }
        else
        {
            Node *temp = head;
            int i = 1;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }

    void reverse()
    {
        Node *curr = head;
        Node *nextNode;

        while (curr != NULL)
        {
            nextNode = curr->next;
            curr->next = curr->prev;
            curr->prev = nextNode;
            curr = nextNode;
        }
        curr = head;
        head = tail;
        tail = curr;
        // swap(head, tail);
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int length()
    {
        Node *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        // cout << count << endl;
        return count;
    }
};

int main()
{
    system("CLS");
    Linkedlist *ll = new Linkedlist();
    // ll->insertAtBeg(10);
    // ll->insertAtBeg(20);
    // ll->insertAtBeg(30);
    // ll->insertAtBeg(40);
    // ll->insertAtBeg(50);

    ll->insertAtEnd(10);
    ll->insertAtEnd(20);
    ll->insertAtEnd(30);
    ll->insertAtEnd(40);
    ll->insertAtEnd(50);
    // ll->insertAtPos(1, 100);
    // ll->deleteFromBeg();
    // ll->deleteFromEnd();
    // ll->deleteFromPos(3);
    ll->reverse();
    ll->display();
    // ll->length();
    return 0;
}