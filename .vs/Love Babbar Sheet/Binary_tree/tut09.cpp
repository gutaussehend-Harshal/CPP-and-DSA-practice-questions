// Postorder Traversal of a tree both using recursion and Iteration -->
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    void iterativePostorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        stack<Node *> s1, s2;
        s1.push(root);

        while (!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            s2.push(temp);

            if (temp->left != NULL)
            {
                s1.push(temp->left);
            }

            if (temp->right != NULL)
            {
                s1.push(temp->right);
            }
        }

        while (!s2.empty())
        {
            Node *temp = s2.top();
            cout << temp->data << " ";
            s2.pop();
        }
    }
};

int main()
{
    system("CLS");
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->iterativePostorder(root);

    return 0;
}