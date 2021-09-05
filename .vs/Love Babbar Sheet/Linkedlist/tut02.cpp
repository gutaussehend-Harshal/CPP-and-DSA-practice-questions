#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
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

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node *&head)
{
    node *n = head;
    head = head->next;
    head->prev = NULL;

    delete n;
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

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void display(node *head)
{
    cout << "Head ->";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "Null";
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    insertAtHead(head, 50);

    deletion(head,1);
    display(head);

    return 0;
}