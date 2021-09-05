#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        // Head -> NULL;
        head = NULL;
    }
    void add(int d)
    {
        // Create a new node
        Node *node = new Node();

        // Store the "Data" in the node
        node->data = d;
        node->next = NULL;

        if (head == NULL)
        {
            head = node;
        }
        else
        {

            // Add this node to the end of linked list
            // Head -> node 1 -> node 2 -> node 3 -> NULL
            // node 4 -> NULL

            // For loop
            // End of loop - add this new node
            Node *lastnode = head;
            for (; lastnode->next != NULL; lastnode = lastnode->next)
            {
            }
            // lastnode should be the last node in the list = Node 3;
            // Head -> node 1 -> node 2 -> node 3 -> node 4 -> NULL

            lastnode->next = node;
        }
    }

    void add(int index, int data)
    {
    }

    void remove(int data)
    {
        // Find where this data is
        // rewire the previous & the next node
        // delete the node
        Node *node = head;
        Node *prev = NULL;
        while (node != NULL && node->data != data)
        {
            prev = node;
            node = node->next;
        }
        if (node != NULL)
        {
            cout << "Deleted node: " << data << endl;
            if (prev == head)
            {
                head = node->next;
            }
            else
            {
                prev->next = node->next;
            }
            delete node;
        }
        else
        {
            cout << "Node not found " << data << endl;
        }
    }

    void print()
    {
        cout << "**********Start of list**********" << endl;
        cout << "Head->";
        for (Node *node = head; node != NULL; node = node->next)
        {
            cout << node->data << "->";
        }
        cout << "Null" << endl;
        cout << "**********End of list**********" << endl;
    }
};

int main()
{
    LinkedList *ll = new LinkedList();
    cout << endl;
    ll->remove(10);
    cout << endl;
    ll->add(10);
    ll->add(20);
    ll->add(35);
    ll->print(); // Print all the nodes in the list

    cout << endl;
    ll->add(100);
    ll->add(70);
    ll->print();

    // ll->add(2, 120);
    // ll->print();
    // Head->10->20->120->35->100->70->Null
    cout << endl;
    ll->remove(10);
    // ll->remove(35);
    // ll->remove(1000);
    cout << endl;
    ll->print();

    return 0;
}