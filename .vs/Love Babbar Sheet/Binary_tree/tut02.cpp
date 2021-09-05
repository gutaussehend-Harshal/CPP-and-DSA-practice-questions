#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *insertBST(Node *root, int val)
    {
        if (root == NULL)
        {
            return new Node(val);
        }

        if (val < root->data)
        {
            root->left = insertBST(root->left, val);
        }
        else
        {
            root->right = insertBST(root->right, val);
        }
        return root;
    }

    void inorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        inorder(root->left);
        inorder(root->right);
    }

    void postorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        inorder(root->right);
        cout << root->data << " ";
    }

    int calculateHeight(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);
        return max(leftHeight, rightHeight) + 1;
        // return max(calculateHeight(root->left), calculateHeight(root->right) + 1);
    }

    int calculateDiameter(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftheight = calculateHeight(root->left);
        int rightheight = calculateHeight(root->right);
        int currDiameter = leftheight + rightheight + 1;

        return max(currDiameter, max(leftheight, rightheight));
    }

    // optimized function -->
    int calcDiameter(Node *root, int *height)
    {
        if (root == NULL)
        {
            *height = 0;
            return 0;
        }
        int lh = 0, rh = 0;
        int lDiameter = calcDiameter(root->left, &lh);
        int rDiameter = calcDiameter(root->right, &rh);

        int currDiameter = lh + rh + 1;
        *height = max(lh, rh) + 1;

        return max(currDiameter, max(lDiameter, rDiameter));
    }

    int countNodes(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return countNodes(root->left) + countNodes(root->right) + 1;
    }

    int sumNodes(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return sumNodes(root->left) + sumNodes(root->right) + root->data;
    }
};

int main()
{
    system("CLS");
    Node *root = NULL;
    root = root->insertBST(root, 5);
    // root = insertBST(root,5);
    root->insertBST(root, 1);
    root->insertBST(root, 3);
    root->insertBST(root, 4);
    root->insertBST(root, 2);
    root->insertBST(root, 7);

    // print inorder
    root->inorder(root);
    cout << endl;

    // print preorder
    root->preorder(root);
    cout << endl;

    // print postorder
    root->postorder(root);
    cout << endl;

    // Height of tree o(n)
    cout << "Maximum height of the tree is: " << root->calculateHeight(root) << endl;

    // Diameter of tree o(n2)
    cout << "Maximum diameter of the tree is: " << root->calculateDiameter(root) << endl;

    // Diameter of tree optimized o(n)
    int height = 0;
    cout << "Maximum diameter of the tree is: " << root->calcDiameter(root, &height) << endl;

    // Count no of nodes in tree
    cout << "Number of nodes: " << root->countNodes(root) << endl;

    // Sum of all nodes in tree
    cout << "Sum of all nodes: " << root->sumNodes(root) << endl;

    return 0;
}