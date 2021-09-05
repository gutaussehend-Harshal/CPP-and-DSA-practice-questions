#include <bits/stdc++.h>
using namespace std;

// Single linkedlist -->

class node
{
public:
    int data;
    node *next;
};

class linkedlist
{
private:
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }

    void insertAtStart(int data)
    {
        node *n = new node();
        n->data = data;
        n->next = head;
        head = n;
    }

    void insertAtEnd(int data)
    {
        node *n = new node();
        n->data = data;

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
        n->next = NULL;
    }

    void display()
    {
        cout << "Head ->";
        for (node *i = head; i != NULL; i = i->next)
        {
            cout << i->data << " ->";
        }
        cout << "Null" << endl;
    }

    void reverseLinkedList()
    {   
        node* prevPtr, *currPtr, *nextPtr;
        prevPtr = NULL;
        currPtr = head;
        nextPtr = head;

        while (nextPtr != NULL)
        {
            nextPtr = nextPtr->next;
            currPtr->next = prevPtr;

            prevPtr = currPtr;
            currPtr = nextPtr;
        }
        head = prevPtr;
    }

    // void deleteNodeWithoutHead(node* node)
    // {
    //     node *temp = node->next;
    //     node->data = temp->data;
    //     node->next = temp->next;

    //     delete temp;
    // }
};

int main()
{
    linkedlist *ll = new linkedlist();

    ll->insertAtEnd(10);
    ll->insertAtEnd(20);
    ll->insertAtEnd(30);
    ll->insertAtEnd(40);
    ll->insertAtEnd(50);
    ll->display();

    ll->reverseLinkedList();
    ll->display();
    // ll->deleteNodeWithoutHead();
    // ll->display();

    return 0;
}