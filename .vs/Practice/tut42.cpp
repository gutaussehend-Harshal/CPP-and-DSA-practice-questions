#include <bits/stdc++.h>
using namespace std;

// Implementation of singly linkedlist -->

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
        head = NULL;
    }

    void insertAtBeg(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
    }

    void insertAtAnyPos(int pos, int data)
    {
        int l = length();
        if (pos < 0 || pos > l)
        {
            cout << "Insertion not possible" << endl;
        }
        else if (pos == 0)
        {
            insertAtBeg(data);
        }
        else
        {
            Node *newNode = new Node();
            newNode->data = data;

            Node *temp = head;
            int i = 1;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void deleteAtBeg()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void deleteAtEnd()
    {
        Node *temp = head, *prevNode;
        while (temp->next != NULL)
        {
            prevNode = temp;
            temp = temp->next;
        }
        if (temp == head)
        {
            head = NULL;
        }
        else
        {
            prevNode->next = NULL;
        }
        delete temp;
    }

    void deleteAtAnyPos(int pos)
    {
        int l = length();
        if (pos == 0)
        {
            deleteAtBeg();
        }
        else if (pos < 0 || pos > l)
        {
            cout << "Deletion not possible" << endl;
        }
        else
        {
            Node *temp = head, *nextNode;
            int i = 1;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            nextNode = temp->next;
            temp->next = nextNode->next;
            delete nextNode;
        }
    }

    void reverse()
    {
        Node *prevNode, *currNode, *nextNode;
        prevNode = NULL;
        currNode = nextNode = head;
        while (nextNode != NULL)
        {
            nextNode = nextNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        head = prevNode;
    }

    void display()
    {
        Node *temp = head;
        cout << "Head ->";
        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "Null" << endl;
    }

    int length()
    {
        int count = 0;
        Node *temp = head;

        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        // cout << count << endl;
        return count;
    }
};

int main()
{
    system("CLS");
    LinkedList *ll = new LinkedList();
    // ll->insertAtBeg(50);
    // ll->insertAtBeg(40);
    // ll->insertAtBeg(30);
    // ll->insertAtBeg(20);
    // ll->insertAtBeg(10);

    ll->insertAtEnd(10);
    ll->insertAtEnd(20);
    ll->insertAtEnd(30);
    ll->insertAtEnd(40);
    ll->insertAtEnd(50);
    ll->insertAtAnyPos(0, 100);
    // ll->deleteAtBeg();
    // ll->deleteAtEnd();
    // ll->deleteAtAnyPos(3);
    // ll->reverse();
    ll->display();
    cout << ll->length();

    return 0;
}