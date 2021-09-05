#include <bits/stdc++.h>
using namespace std;

// Linked list version -->

class Stack
{
public:
    int data;
    Stack *next;
};

class StackList
{
private:
    Stack *top;

public:
    StackList()
    {
        top = 0;
    }

    void push(int data)
    {
        Stack *newNode = new Stack();
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }

    void display()
    {
        if (top == 0)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            cout << "-----Stack-----" << endl;
            Stack *temp = top;
            while (temp != 0)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
            cout << "-----End Of Stack-----" << endl;
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
            cout << "peek: " << top->data << endl;
        }
    }

    void pop()
    {
        Stack *temp = top;
        if (top == 0)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            //cout << "top: " << temp->data << endl;
            cout << "top: " << top->data << endl;
        }
        // top = temp->next;  --> ok
        // temp = temp->next; --> not ok (Infinite condition)
        // temp = top->next; --> not ok (Infinite condition)
        top = top->next;
        delete temp;
    }

    bool isEmpty()
    {
        if (top == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    system("CLS");
    StackList *stack = new StackList();
    stack->push(5);
    stack->push(4);
    stack->push(3);
    stack->push(2);
    stack->push(1);
    stack->display();
    stack->pop();
    stack->pop();
    stack->pop();
    stack->pop();
    stack->pop();
    stack->peek();
    stack->peek();
    stack->peek();
    stack->peek();
    stack->peek();
    stack->peek();
    stack->display();

    if (stack->isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}