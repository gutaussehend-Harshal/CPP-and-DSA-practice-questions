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

    void insertAtStart(int data)
    {
        node *curr = new node();
        curr->data = data;
        curr->next = head;
        head = curr;
    }

    void display()
    {
        cout << "head ->";
        for (node *i = head; i != NULL; i = i->next)
        {
            cout << i->data << " ->";
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    linkedlist *ll = new linkedlist();
    ll->insertAtStart(10);
    ll->insertAtStart(20);
    ll->insertAtStart(30);
    ll->insertAtStart(40);
    ll->insertAtStart(50);
    ll->display();
    return 0;
}