#include <bits/stdc++.h>
using namespace std;

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

    void insertAtHead(int value)
    {
        node *n = new node();
        n->data = value;
        n->next = head;
        head = n;
    }

    void inserAtTail(int value)
    {
        node *n = new node();
        n->data = value;

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

    void deleteAtHead()
    {
        node *todelete = head;
        head = head->next;

        delete todelete;
    }

    void deletion(int value)
    {
        if (head == NULL)
        {
            return;
        }

        if (head->next == NULL)
        {
            deleteAtHead();
            return;
        }

        node *temp = head;
        while (temp->next->data != value)
        {
            temp = temp->next;
        }
        node *todelete = temp->next;
        temp->next = temp->next->next;

        delete todelete;
    }

    bool Search(int key)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void reverse()
    {
        node *prevptr = NULL;
        node *currptr = head;
        node *nextptr;

        while (currptr != NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;

            prevptr = currptr;
            currptr = nextptr;
        }

        head = prevptr;
    }

    void reverseK(int k)
    {
        node *prevptr = NULL;
        node *currptr = head;
        node *nextptr;

        int count = 0;
        while (currptr != NULL && count < k)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;

            prevptr = currptr;
            currptr = nextptr;
            count++;
        }

        if (nextptr != NULL)
        {
            reverseK(k);
        }

        head = prevptr;
    }

    void display()
    {
        cout << "head->";
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};

int main()
{
    system("CLS");
    linkedlist *ll = new linkedlist();
    cout << "Insert at tail" << endl;
    ll->inserAtTail(1);
    ll->inserAtTail(2);
    ll->inserAtTail(3);
    ll->inserAtTail(4);
    ll->display();
    cout << "Insert at head" << endl;
    ll->insertAtHead(55);
    ll->display();
    cout << "Search the element in list" << endl;
    cout << ll->Search(5) << endl;
    cout << "Delete the element from list" << endl;
    ll->deletion(3);
    ll->display();
    cout << "delete the element at head" << endl;
    ll->deleteAtHead();
    ll->display();
    cout << "Reverse the list" << endl;
    ll->reverse();
    ll->display();
    // cout << "Reverse k node" << endl;
    // ll->reverseK(2);
    // ll->display();
    system("Pause");
    return 0;
}