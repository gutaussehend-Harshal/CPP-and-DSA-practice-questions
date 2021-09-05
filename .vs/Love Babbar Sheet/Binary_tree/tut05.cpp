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

    void reverseLevelOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        stack<Node *> s;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();   // Instead of temp u can put root also
            q.pop();
            s.push(temp);

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }

        while (!s.empty())
        {
            Node *temp = s.top();
            cout << temp->data << " ";
            s.pop();
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

    cout << "Level Order traversal of binary tree is \n";
    root->reverseLevelOrder(root);

    return 0;
}