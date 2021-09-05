#include <iostream>
using namespace std;
//single linkedlist delete middle

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

    void addAtEnd(int d)
    {
        Node *curr = new Node();
        curr->data = d;
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

        curr->next = NULL;
    }

    void deleteMid()
    {
        if (head == NULL)
        {
            cout << "list is empty" << endl;
        }
        else if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete head;
            cout << "list is empty" << endl;
        }
        else
        {
            Node *slow, *fast, *temp;
            slow = fast = head;
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

    void print()
    {
        cout << "start " << endl;
        cout << "head ->";
        for (Node *i = head; i != NULL; i = i->next)
        {
            // cout <<" | " << i->data << " | "<<i->next<<" ->";
            cout << i->data << " ->";
        }
        cout << "NULL" << endl;
        cout << "End of Linkedlist" << endl;
    }
};

int main()
{
    LinkedList *l = new LinkedList();
    l->addAtEnd(10);
    l->addAtEnd(20);
    l->addAtEnd(30);
    l->addAtEnd(40);
    l->addAtEnd(50);
    // l->print();
    l->deleteMid();
    l->print();

    return 0;
}
