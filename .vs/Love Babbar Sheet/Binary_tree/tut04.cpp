// level order traversal -->
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // public:
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    void printLevelOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            cout << temp->data << " ";
            q.pop();

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
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

    root->printLevelOrder(root);

    return 0;
}