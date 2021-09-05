#include <iostream>
using namespace std;
//even odd data seperation in linked list
// Input: 17->15->8->12->10->5->4->1->7->6->NULL
// Output: 8->12->10->4->6->17->15->5->1->7->NULL

class Node
{
public:
    int data;
    Node *next;
};

class SingleLinkedList
{
public:
    int data;
    Node *next;
    Node *head;
    SingleLinkedList()
    {
        head = NULL;
    }

    void insertAtTail(int data)
    {
        Node *curr = new Node();
        curr->data = data;
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

    void print(Node *ptr)
    {
        cout << "head ->";
        Node *temp = ptr;
        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    Node *oddAfterEven(Node *head)
    {

        Node *curr, *evenStart, *oddStart, *evenEnd, *oddEnd;
        curr = head;
        evenStart = oddStart = evenEnd = oddEnd = NULL;       // 17 15 8 12 10 5 4 1 7 6

        while (curr != NULL)
        {
            int val = curr->data;

            if (val % 2 == 0)
            {
                if (evenStart == NULL)           
                {
                    evenStart = curr;
                    evenEnd = evenStart;
                }
                else
                {
                    evenEnd->next = curr;
                    evenEnd = evenEnd->next;
                }
            }
            else
            {
                if (oddStart == NULL)
                {
                    oddStart = curr;
                    oddEnd = oddStart;
                }
                else
                {
                    oddEnd->next = curr;
                    oddEnd = oddEnd->next;
                }
            }
            curr = curr->next;
        }

        if (oddStart == NULL || evenStart == NULL)
        {
            return head;
        }

        evenEnd->next = oddStart;
        oddEnd->next = NULL;

        head = evenStart;
        return head;
    }
};

int main()
{
    system("CLS");
    SingleLinkedList *l = new SingleLinkedList();
    l->insertAtTail(17);
    l->insertAtTail(15);
    l->insertAtTail(8);
    l->insertAtTail(12);
    l->insertAtTail(10);
    l->insertAtTail(5);
    l->insertAtTail(4);
    l->insertAtTail(1);
    l->insertAtTail(7);
    l->insertAtTail(6);
    cout << "               -----Before change-----         " << endl;
    l->print(l->head);
    cout << "               -----After change-----          " << endl;
    Node *ptr = l->oddAfterEven(l->head);
    l->print(ptr);

    return 0;
}