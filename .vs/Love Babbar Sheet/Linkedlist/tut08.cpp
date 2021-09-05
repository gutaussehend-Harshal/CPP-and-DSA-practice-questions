#include <bits/stdc++.h>
using namespace std;

//delete node from linked list without head pointer -->

class Node
{
public:
    int data;
    Node *next;
};

class SingleLinkedList
{
private:
    // Node *head;

public:
    Node *head;
    SingleLinkedList()
    {
        head = NULL;
    }

    void addAtEnd(int d)
    {
        Node *curr = new Node();
        curr->data = d;
        curr->next = NULL;
        if (head == NULL)
        {
            head = curr;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = curr;
        }
    }

    void delNode(Node *ptr)
    {
        if (ptr == NULL)
        {
            cout << "List is empty" << endl;
        }
        else if (ptr->next == NULL)
        {
            delete ptr;
            cout << "this is last node" << endl;
        }

        else
        {
            ptr->next = ptr->next->next;
        }
    }

    void deleteNode(Node *ptr)
    {
        if (ptr->next == NULL)
        {
            free(ptr);
            return;
        }
        Node *temp = ptr->next;
        ptr->data = temp->data;
        ptr->next = temp->next;
        free(temp);
    }

    void print()
    {
        cout << "head ->";
        Node *i;
        for (i = head; i != NULL; i = i->next)
        {
            cout << i->data << " ->";
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    SingleLinkedList *l = new SingleLinkedList();
    l->addAtEnd(10);
    l->addAtEnd(20);
    l->addAtEnd(30);
    l->addAtEnd(40);
    l->addAtEnd(50);
    l->addAtEnd(60);
    l->addAtEnd(70);
    l->print();

    Node *del = l->head;

    // l->delNode(del);
    l->deleteNode(del);

    l->print();

    return 0;
}