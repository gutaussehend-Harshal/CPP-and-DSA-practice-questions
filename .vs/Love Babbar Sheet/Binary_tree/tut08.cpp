// Preorder Traversal of a tree both using recursion and Iteration -->
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

    void iterativePreorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        stack<Node *> s;
        s.push(root);

        while (!s.empty())
        {
            Node *temp = s.top();
            cout << temp->data << " ";
            s.pop();

            if (temp->right != NULL)
            {
                s.push(temp->right);
            }

            if (temp->left != NULL)
            {
                s.push(temp->left);
            }
        }
    }
};

int main()
{
    system("CLS");
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(2);

    root->iterativePreorder(root);

    return 0;
}