#include <bits/stdc++.h>
using namespace std;

// Reverse k nodes in linked list -->

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

node *reverseK(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = reverseK(nextptr, k);
    }

    return prevptr;
}

int main()
{
    system("CLS");
    node *head1 = NULL;
    node *head2 = NULL;
    int k1 = 4;
    int k2 = 3;

    int arr1[] = {1, 2, 2, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 8; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    cout << "Before reverse k nodes in linked list" << endl;
    display(head1);
    cout << endl;
    display(head2);
    cout << endl;
    cout << endl;
    cout << "After reverse k nodes in linked list" << endl;
    node *newHead1 = reverseK(head1, k1);
    display(newHead1);
    cout << endl;
    node *newHead2 = reverseK(head2, k2);
    display(newHead2);

    return 0;
}