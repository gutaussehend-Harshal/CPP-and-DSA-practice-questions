#include <bits/stdc++.h>
using namespace std;

// Doubly linked list -->

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtHead(int data)
    {
        Node *newNode = new Node();
        newNode->next = newNode->prev = NULL;
        newNode->data = data;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtTail(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtPos(int pos, int data)
    {
        int l = lengthOfDLL();
        if (pos < 1 || pos > l)
        {
            cout << "Invalid position" << endl;
        }
        else if (pos == 0)
        {
            insertAtHead(data);
        }
        else
        {
            Node *newNode = new Node();
            newNode->data = data;
            int i = 1;
            Node *temp = head;

            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->next->prev = newNode;
        }
    }

    void insertAfterPos(int pos, int data)
    {
        int l = lengthOfDLL();
        if (pos < 1 || pos > l)
        {
            cout << "Invalid position" << endl;
        }
        else
        {
            Node *newNode = new Node();
            newNode->data = data;
            int i = 1;
            Node *temp = head;

            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->next->prev = newNode;
        }
    }

    void deleteFromBeg()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }

    void deleteFromEnd()
    {
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = tail;
            tail->prev->next = NULL;
            tail = tail->prev;
            delete temp;
        }
    }

    void deleteFromPos(int pos)
    {
        int i = 1;
        int l = lengthOfDLL();
        Node *temp = head;

        if (pos == 1)
        {
            deleteFromBeg();
        }
        else if (pos == l)
        {
            deleteFromEnd();
        }
        else
        {
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    int lengthOfDLL()
    {
        Node *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void reverseDLL()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *current, *nextNode;
            current = head;
            while (current != NULL)
            {
                nextNode = current->next;
                current->next = current->prev;
                current->prev = nextNode;
                current = nextNode;
            }
            head = tail;
            tail = current;
        }
    }
};
int main()
{
    system("CLS");
    DoublyLinkedList *dll = new DoublyLinkedList();
    // dll->insertAtHead(10);
    // dll->insertAtHead(20);
    // dll->insertAtHead(30);
    // dll->insertAtHead(40);
    // dll->insertAtHead(50);

    dll->insertAtTail(10);
    dll->insertAtTail(20);
    dll->insertAtTail(30);
    dll->insertAtTail(40);
    dll->insertAtTail(50);

    // dll->lengthOfDLL();
    dll->insertAtPos(3, 100);
    dll->insertAfterPos(3, 90);
    dll->deleteFromBeg();
    dll->deleteFromEnd();
    dll->deleteFromPos(3);
    dll->reverseDLL();
    dll->display();
    return 0;
}