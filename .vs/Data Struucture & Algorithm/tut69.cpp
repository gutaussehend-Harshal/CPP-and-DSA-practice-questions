#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *currptr = head;
//     node *nextptr;

//     while (currptr != NULL)
//     {
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }

// node *reverseRecursive(node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     node *newhead = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return newhead;
// }

// node *reversek(node *&head, int k)
// {
//     node *prevptr = NULL;
//     node *currptr = head;
//     node *nextptr;

//     int count = 0;
//     while (currptr != NULL && count < k)
//     {
//         nextptr = currptr->next;
//         currptr->next = prevptr;
//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }
//     if (nextptr != NULL)
//     {
//         head->next = reversek(nextptr, k);
//     }
//     return prevptr;
// }

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

bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
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

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makeCycle(head, 3);
    //display(head);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;
    display(head);

    return 0;
}