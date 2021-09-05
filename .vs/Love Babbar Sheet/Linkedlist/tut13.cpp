#include <bits/stdc++.h>
using namespace std;

// Pairwise swap elements of a given linked list -->

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

void pairWiseSwap(node *&head)
{
    node *temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
}

int main()
{   
    system("CLS");
    node *head = NULL;

    int arr1[] = {1, 3, 5, 7, 9};

    for (int i = 0; i < 5; i++)
    {
        insertAtTail(head, arr1[i]);
    }

    display(head);
    cout << endl;
    pairWiseSwap(head);
    display(head);

    return 0;
}