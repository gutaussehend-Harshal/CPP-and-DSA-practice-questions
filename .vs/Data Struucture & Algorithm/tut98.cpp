#include <bits/stdc++.h>
using namespace std;
//doubly Linked List

class Node
{
public:
    int data;
    Node *next, *prev;
};

class DLinkedList
{
private:
    Node *head, *tail;

public:
    DLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void addAtBeg(int d)
    {
        Node *curr = new Node();
        curr->data = d;
        curr->next = head;
        curr->next->prev = curr;
        curr->prev = NULL;
        head = curr;
    }

    void addAtEnd(int d)
    {
        Node *newNode = new Node();
        newNode->data = d;
        newNode->next = NULL;
        newNode->prev = NULL;

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

    int len()
    {
        Node *curr = head;
        int count = 0;
        while (curr != NULL)
        {
            count++;
            curr = curr->next;
        }
        // cout << count << endl;
        return count;
    }

    void addAtPos(int d, int pos)
    {
        Node *curr = new Node();
        curr->data = d;
        int l = len();

        if (pos == 0)
        {
            addAtBeg(d);
        }
        else if (pos < 0 || pos >= l)
        {
            cout << "invalid position input" << endl;
        }

        else if (pos == l - 1)
        {
            addAtEnd(d);
        }

        else
        {

            Node *temp = head;
            int i = 0;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }

            curr->next = temp->next;
            curr->next->prev = curr;
            temp->next = curr;
            curr->prev = temp;
        }
    }

    void delAtBeg()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            head->prev = NULL;
            delete temp;
        }
    }

    void delAtEnd()
    {
        Node *temp;
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            temp = tail;
            tail->prev->next = NULL;
            tail = tail->prev;
            delete temp;
        }
        // Node *temp, *curr;
        // curr = head;
        // while (curr->next != NULL)
        // {
        //     temp = curr;
        //     curr = curr->next;
        // }
        // cout << temp->data << endl;
        // temp->next = NULL;
        // tail = temp;
        // delete curr;
        // temp = curr->prev;
        // tail = curr;
        // curr->next = NULL;
        // delete temp;
    }

    void delFromPos(int pos)
    {
        int l = len();
        if (pos == 0)
        {
            delAtBeg();
        }
        else if (pos < 0 || pos >= l)
        {
            cout << "invalid position input" << endl;
        }
        else if (pos == l - 1)
        {
            cout << "delete from end fun called" << endl;
            delAtEnd();
        }

        else
        {
            Node *temp, *curr;
            temp = curr = head;
            int i = 0;
            while (i < pos)
            {
                curr = temp;
                temp = temp->next;
                i++;
            }
            curr->next = temp->next;
            temp->next->prev = curr;
            delete temp;
        }
    }

    void printReverse()
    {
        cout << "start of list" << endl;
        cout << "Tail ------>";
        Node *i;
        for (i = tail; i != NULL; i = i->prev)
        {
            cout /* <<i->prev<<"| |"/ << i->data /<<"| |"<<i->next */ << " ->";
        }
        // cout<<i->data<<"->>"<<endl;
        cout << " head" << endl;
        cout << "end of List" << endl;
    }

    void print()
    {
        cout<<head->data<<endl;
        if (head == NULL)
        {
            cout << "List is Empty"<<endl;
        }
        else
        {
            cout << "start of list" << endl
                 << endl;
            cout << "Head ------>";
            Node *i;
            for (i = head; i != NULL; i = i->next)
            {
                cout /* <<i->prev<<"| |"/ << i->data /<<"| |"<<i->next */ << " ->";
                // cout << i->prev << "| |" << i->data << "| |" << i->next << " ->";
            }
            // cout<<i->data<<endl;
            cout << "Tail" << endl
                 << endl;
            cout << "end of List" << endl;
        }
    }
};

int main()
{
    system("CLS");
    DLinkedList *l = new DLinkedList();
    // l->addAtEnd(11);
    // l->addAtEnd(22);
    // l->addAtEnd(33);
    // l->addAtEnd(44);
    // l->addAtEnd(55);
    // l->addAtEnd(66);
    // l->delFromPos(0);
    // l->delAtBeg();
    // l->delAtBeg();
    // l->delAtBeg();
    // l->addAtBeg(1);
    // l->addAtPos(888, 0);
    // l->delAtBeg();
    // l->len();
    // l->delAtEnd();
    // l->delAtEnd();
    // l->delAtEnd();
    // cout<<"length : --> "<<l->len()<<endl;
    l->addAtBeg(10);
    l->addAtBeg(20);
    l->addAtBeg(30);
    l->addAtBeg(40);
    l->addAtBeg(50);
    l->print();
    // l->printReverse();

    return 0;
}