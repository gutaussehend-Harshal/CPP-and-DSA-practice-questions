#include <bits/stdc++.h>
using namespace std;

// Implementation of doubly linked list -->

class node
{
public:
    int data;
    node *next;
    node *prev;
};

class doublyLinkedList
{
private:
    node *head;
    node *tail;

public:
    doublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtStart(int data)
    {
        node *new_node = new node();
        new_node->data = data;

        new_node->next = head;
        head->prev = new_node;
        new_node->prev = NULL;
        head = new_node;
    }

    // void insertAtEnd(int data)
    // {
    //     node *p = new node();
    //     p->data = data;
    //     p->next = NULL;
    //     p->prev = NULL;

    //     while (p->next != NULL)
    //     {
    //         p = p->next;
    //     }
    //     p->next = new_node;
    //     new_node->prev = p;
    //     new_node->next = NULL;
    // }
    
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            cout << "head";
            for (node *i = head; i != NULL; i = i->next)
            {
                cout << i->data << "->";
            }
            cout << "null";
        }
    }
};

int main()
{
    system("CLS");
    doublyLinkedList *dll = new doublyLinkedList();
    dll->insertAtStart(10);
    dll->insertAtStart(20);
    dll->insertAtStart(30);
    dll->insertAtStart(40);
    dll->insertAtStart(50);
    dll->display();

    return 0;
}