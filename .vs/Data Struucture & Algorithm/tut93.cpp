#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void push(int d)
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
            Node *lastnode = head;
            while (lastnode->next != NULL)
            {
                lastnode = lastnode->next;
            }
            lastnode->next = curr;
        }
    }

    void addAtBeg(int d)
    {
        Node *curr = new Node();
        curr->data = d;
        curr->next = head;
        head = curr;
    }

    void delAtBeg()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else
        {
            Node *temp = new Node();
            temp = head;
            head = head->next;
            delete temp;
            cout << "1st node deleted" << endl;
        }
    }

    void delFromEnd()
    {
        Node *prev, *curr;
        curr = head; //i=0
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == head)
        {
            head = NULL;
        }
        else
        {
            prev->next = NULL;
        }
        delete curr;
    }

    void delAtPos(int pos)
    {
        if (pos == 0)
        {
            delAtBeg();
        }
        else
        {

            Node *curr = head;
            int l = 0;
            while (curr != NULL)
            {
                curr = curr->next;
                l++;
            }
            cout << l << endl;

            if (pos < 0 || pos > l - 1)
            {
                cout << "invalid pos" << endl;
            }
            else
            {

                Node *curr, *prev;
                curr = prev = head;
                int i = 0;
                while (i < pos)
                {
                    prev = curr;
                    curr = curr->next;
                    i++;
                }
                prev->next = curr->next;
                delete curr;
            }
        }
    }

    void reverse()
    {
        Node *prev_n, *curr_n, *next_n;
        prev_n = NULL;
        curr_n = next_n = head;         //10;
        while (next_n != NULL)
        {
            next_n = next_n->next;     //next =20
            curr_n->next = prev_n;     //curr_n = NULL; == 10->NULL;
            prev_n = curr_n;            //prev = 10
            
            // next_n = next_n->next;
            curr_n = next_n;            //curr = 20
        }
        head = prev_n;                     //head = 10
    }

    void print()
    {

        cout << "starting list" << endl;
        cout << "head->";
        for (Node *i = head; i != NULL; i = i->next)
        {
            cout << i->data << " ->";
        }
        cout << "NULL" << endl;
        cout << "End of list" << endl;
    }
};

int main()
{
    LinkedList *l = new LinkedList();
    l->push(10);
    l->push(20);
    l->push(30);
    l->push(40);
    l->push(50);
    l->push(60);
    // l->addAtBeg(500);
    l->print();
    // l->delAtBeg();
    l->reverse();
    // l->delAtPos(0);
    // l->delFromEnd();
    l->print();

    return 0;
}