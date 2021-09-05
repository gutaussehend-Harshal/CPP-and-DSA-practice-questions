#include <bits/stdc++.h>
using namespace std;

// Implementation of stack using Linked list -->

class node
{
public:
    int data;
    node *next;
};

node *top = 0;

void push(int x)
{
    node *newNode = new node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void display()
{
    node *temp = top;
    if (top == 0)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        while (temp != 0)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "top element is " << top->data << endl;
    }
}

void pop()
{
    node *temp = top;
    if (top == 0)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << top->data << endl;
    }

    top = top->next;
    // delete temp;
    free(temp);
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    cout << endl;
    peek();
    display();

    return 0;
}