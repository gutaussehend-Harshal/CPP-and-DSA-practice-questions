#include <bits/stdc++.h>
using namespace std;

// Find the middle Element of a linked list -->

class node
{
public:
    int data;
    node *next;
};

class linkedList
{
private:
    node *head;

public:
    linkedList()
    {
        head = NULL;
    }

    void insertAtHead(int data)
    {
        node *curr = new node();
        curr->data = data;

        curr->next = head;
        head = curr;
    }

    void insertAtTail(int data)
    {
        node *curr = new node();
        curr->data = data;

        if (head == NULL)
        {
            head = curr;
            return;
        }

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = curr;
        curr->next = NULL;
    }

    void display()
    {
        cout << "Head ->";
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "Null";
    }

    void printMiddle()
    {
        node *slow = head;
        node *fast = head;

        if (head != NULL)
        {
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            cout << "The middle element is: " << slow->data << endl;
        }
    }

    void deleteMiddle()
    {
        // if (head == NULL)
        // {
        //     cout << "List is empty" << endl;
        // }
        // else if (head->next != NULL)
        // {
        //     node *temp = head;
        //     head = NULL;
        //     delete temp;
        //     cout << "List is empty" << endl;
        // }
        // else
        {
            node *slow = head;
            node *fast = head;
            node *temp;

            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                temp = slow;
                slow = slow->next;
            }

            temp->next = slow->next;
            delete slow;
        }
    }
};

int main()
{
    system("CLS");
    linkedList *ll = new linkedList();
    ll->insertAtTail(10);
    ll->insertAtTail(20);
    ll->insertAtTail(30);
    ll->insertAtTail(40);
    ll->insertAtTail(50); 
    ll->display();
    cout << endl;
    ll->printMiddle();
    ll->deleteMiddle();
    ll->display();

    return 0;
}