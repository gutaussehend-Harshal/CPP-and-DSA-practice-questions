#include <bits/stdc++.h>
using namespace std;

// Deletion & removal of cycle linked list -->

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

bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

void removeCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

void display(node *head)
{
    cout << "Head ->";
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cout << temp->data << " ";
    }
}

int main()
{
    system("CLS");
    node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    // makeCycle(head, 3);
    // display(head);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;
    // display(head);


    return 0;
}