#include <bits/stdc++.h>
using namespace std;

// Detect loop in ll -->

class Node
{
public:
    int data;
    Node *next;
};

int detectLoop(Node **head)
{
    Node *slowPtr = *head;
    Node *fastPtr = *head;

    while (slowPtr != NULL && fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;

        if (slowPtr == fastPtr)
        {
            cout << "Loop found" << endl;
            return 1;
        }
    }
    cout << "Loop not found" << endl;
    return 0;
}

void insertAtBegining(Node **head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(Node **head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}

void insertAfter(Node *prev, int data)
{
    if (prev == NULL)
    {
        cout << "Previous can not be NULL" << endl;
        return;
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = prev->next;
    prev->next = newNode;
}

void length(Node **head)
{
    Node *temp = *head;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << "Length of linked list is: " << count << endl;
}

void display(Node *temp)
{
    // Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    system("CLS");
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    Node *seventh = new Node();
    Node *eighth = new Node();
    Node *nineth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seventh;

    seventh->data = 7;
    seventh->next = eighth;

    eighth->data = 8;
    eighth->next = nineth;

    nineth->data = 9;
    nineth->next = NULL;

    // insertAtBegining(&head, -1);
    // insertAtBegining(&head, -2);
    // insertAtTail(&head, -3);
    // insertAtTail(&head, -4);
    // length(&head);
    // insertAfter(head, 0);
    detectLoop(&head);
    // display(head);

    return 0;
}