#include <bits/stdc++.h>
using namespace std;

// Put even position nodes after odd position nodes -->

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
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
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

void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    system("CLS");
    node *head = NULL;

    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
    {
        insertAtTail(head, arr[i]);
    }

    display(head);
    cout << endl;
    evenAfterOdd(head);
    display(head);

    return 0;
}