#include <bits/stdc++.h>
using namespace std;

// Circular linked list -->

class node
{
public:
    int data;
    node *next;
};

class circularLinkedList
{
private:
    node *head;

public:
    circularLinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int data)
    {
        node *n = new node();
        n->data = data;

        if (head == NULL)
        {
            n->next = n;
            head = n;
            return;
        }

        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
    }

    void insertAtTail(int data)
    {
        if (head == NULL)
        {
            insertAtHead(data);
            return;
        }

        node *n = new node();
        n->data = data;
        node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }

    void deleteAtHead()
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        node *todelete;
        temp->next = head->next;
        head = head->next;
        delete todelete;
    }

    void deletion(int pos)
    {
        if (pos == 1)
        {
            deleteAtHead();
            return;
        }

        node *temp = head;
        int count = 1;

        while (count != pos - 1)
        {
            temp = temp->next;
            count++;
        }
        node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }

    void display()
    {
        cout << "Head ->";
        node *temp = head;
        do
        {
            cout << temp->data << " ->";
            temp = temp->next;
        } while (temp != head);
        cout << "Head";
    }
};

int main()
{
    circularLinkedList *cll = new circularLinkedList();
    cll->insertAtTail(10);
    cll->insertAtTail(20);
    cll->insertAtTail(30);
    cll->insertAtTail(40);
    cout << endl;

    cll->insertAtHead(50);
    cll->display();
    cout << endl;

    cll->deletion(1);
    cll->display();
    cout << endl;

    return 0;
}