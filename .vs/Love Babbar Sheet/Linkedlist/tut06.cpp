#include <bits/stdc++.h>
using namespace std;

//check whether linked list is palindrome or not -->

class Node
{
public:
    int data;
    Node *next;
};

class SingleLinkedList
{
private:
    Node *head;

public:
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

    Node *reverse(Node *head)
    {

        Node *curr, *i, *prev;
        i = head;
        curr = NULL;
        prev = NULL;
        while (i != NULL)
        {
            curr = i->next;
            i->next = prev;
            prev = i;
            i = curr;
        }
        return prev;
    }

    bool chkPalindrome()
    {
        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        Node *s, *f;
        s = f = head;
        while (f->next != NULL && f->next->next != NULL)
        {
            s = s->next;
            f = f->next->next;
        }

        s->next = reverse(s->next);
        s = s->next;
        while (s != NULL)
        {
            if (head->data != s->data)
            {
                return false;
            }
            head = head->next;
            s = s->next;
        }
        return true;
    }
};

int main()
{
    SingleLinkedList *l = new SingleLinkedList();
    l->addAtEnd(10);
    l->addAtEnd(20);
    l->addAtEnd(30);
    l->addAtEnd(40);
    l->addAtEnd(30);
    l->addAtEnd(20);
    l->addAtEnd(10);
    // l->reverse();
    // l->print();
    cout << l->chkPalindrome() << endl;
    // l->print();

    return 0;
}