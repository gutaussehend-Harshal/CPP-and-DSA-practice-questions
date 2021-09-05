#include <bits/stdc++.h>
using namespace std;

// Merge of three sorted linkedlist -->

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

node *merge(node *&head1, node *&head2, node *&head3)
{
    node *p1 = head1;
    node *p2 = head2;
    node *p4 = head3;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL && p3 != NULL)
    {
        if (p1->data < p2->data && p1->data < p4->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else if (p2->data < p1->data && p2->data < p4->data)
        {
            p3->next = p2;
            p2 = p2->next;
        }
        else
        {
            p3->next = p4;
            p4 = p4->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    while (p4 != NULL)
    {
        p3->next = p4;
        p4 = p4->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

int main()
{
    system("CLS");
    node *head1 = NULL;
    node *head2 = NULL;
    node *head3 = NULL;

    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int arr3[] = {0, 9, 10, 11};

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head3, arr3[i]);
    }

    display(head1);
    cout << endl;
    display(head2);
    cout << endl;
    display(head3);
    cout << endl;
    node *newhead = merge(head1, head2, head3);
    display(newhead);

    return 0;
}