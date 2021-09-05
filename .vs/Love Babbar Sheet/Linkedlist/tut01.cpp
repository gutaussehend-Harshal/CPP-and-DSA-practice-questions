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
        // node *n = new node();
        // n->data = data;
        // n->next = head;
        // head = n;

        node *newNode = new node();
        newNode->data = data;

        newNode->next = head;
        head = newNode;
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

    void inserAtAnyIndex(int data, int index)
    {
        node *n = new node();
        n->data = data;
        int l = length();

        if (index == 0)
        {
            insertAtStart(data);
        }
        else if (index < 0 || index > l)
        {
            cout << "Invalid index" << endl;
        }
        else
        {
            node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }

    void deleteAtStart()
    {
        if (head == NULL)
        {
            cout << "list is empty" << endl;
        }
        else
        {
            node *n = head;
            head = n->next;
            delete n;
        }
    }

    void deleteAtEnd()
    {
        node *curr = head;
        node *prev = head;

        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete curr;
    }

    void deleteAtAnyIndex(int index)
    {
        if (index == 0)
        {
            deleteAtStart();
        }
        else
        {
            int l = length();
            if (index > l  || index < 0)
            {
                cout << "Invalid input position" << endl;
            }
            else
            {
                node *prev;
                node *curr;
                prev = head;
                curr = head;

                for (int i = 0; i < index-1; i++)
                {
                    prev = curr;
                    curr = curr->next;
                }
                prev->next = curr->next;
                delete curr;
            }
        }
    }

    void reverse()
    {
        node *prevptr = NULL;
        node *currptr = head;
        node *nextptr;

        while (currptr != NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr; // head->10->20->30->null
            prevptr = currptr;       // null<-10<-20<-30<-head
            currptr = nextptr;
        }
        head = prevptr;
    }

    int length()
    {
        node *n = head;
        int count = 0;

        while (n != NULL)
        {
            count++;
            n = n->next;
        }
        return count;
    }

    void display()
    {
        // cout << "Head ->";
        // for (node *i = head; i != NULL; i = i->next)
        // {
        //     cout << i->data << " ->";
        // }
        // cout << "Null" << endl;

        node *temp = head;
        cout << "Head ->";
        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "Null";
    }
};

int main()
{
    linkedlist *ll = new linkedlist();
    ll->insertAtStart(50);
    ll->insertAtStart(40);
    ll->insertAtStart(30);
    ll->insertAtStart(20);
    ll->insertAtStart(10);
    ll->display();

    // ll->insertAtEnd(10);
    // ll->insertAtEnd(20);
    // ll->insertAtEnd(30);
    // ll->insertAtEnd(40);
    // ll->insertAtEnd(50);
    // ll->display();

    // ll->reverse();
    // ll->display();

    // cout << ll->length() << endl;

    // ll->inserAtAnyIndex(60,4);
    // ll->display();

    // ll->deleteAtStart();
    // ll->display();

    // ll->deleteAtEnd();
    // ll->display();

    // ll->deleteAtAnyIndex(3);
    // ll->display();
    return 0;

}