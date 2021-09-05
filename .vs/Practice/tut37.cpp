#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *top = 0;

void push(int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void display()
{
    node *temp = top;
    if (top == 0)
    {
        cout << "Stack is empty" << endl;
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
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Peek element: " << top->data << endl;
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
        cout << "Pop element: " << top->data << endl;
    }
    top = top->next;
    delete temp;
}

int main()
{
    system("CLS");
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    peek();
    display();

    return 0;
}