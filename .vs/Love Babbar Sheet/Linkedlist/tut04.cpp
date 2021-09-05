#include <bits/stdc++.h>
using namespace std;

// Circular linked list -->

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertAtHead(node *&head, int value)
{
    node *n = new node(value);
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

void insertAtTail(node *&head, int value)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }

    node *n = new node(value);
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(node *&head)
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

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
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

void display(node *head)
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

int main()
{
    node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    insertAtHead(head, 50);
    display(head);
    cout << endl;

    deletion(head,1);
    display(head);
    return 0;
}