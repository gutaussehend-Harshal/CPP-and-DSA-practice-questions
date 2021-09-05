#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class LinkedList
{
private:
    Node *head;
    Node *Tail;

public:
    LinkedList()
    {
        head = NULL;
        Tail = NULL;
    }

    void insertAtEnd(int data)
    {
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (head == NULL)
        {
            head = new_node;
            Tail = new_node;
        }
        else
        {
            // Node *curr = head;
            // while (curr->next != NULL)
            // {
            //     curr = curr->next;
            // }
            // curr->next = new_node;
            // new_node->prev = curr;
            // new_node->next = NULL;
            Tail->next = new_node;
            new_node->prev = Tail;
            Tail = new_node;
        }
    }

    // void print()
    // {
    //     cout << "Head->";
    //     for (Node *i = head; i != NULL; i = i->next)
    //     {
    //         cout << i->data << "->";
    //     }
    //     cout << "Null" << endl;
    // }

    void printreverse()
    {
        cout << "Null->";
        for (Node *i = Tail; i != head->prev; i = i->prev)
        {
            cout << i->data << "->";
        }
        cout << "Head" << endl;
    }
};

int main()
{
    LinkedList *ll = new LinkedList();
    ll->insertAtEnd(10);
    ll->insertAtEnd(20);
    ll->insertAtEnd(30);
    ll->insertAtEnd(40);
    // ll->print();
    ll->printreverse();

    return 0;
}