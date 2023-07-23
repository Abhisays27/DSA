#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter data:";
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data in inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTransversel(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana transverse
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
                // hame seprator dalna hoga
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root)
{

    // base case
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

    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{

    // base case
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    // creating a tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout << "the tree is:" << endl;
    levelOrderTransversel(root);
    cout << "Inorder transversal is:";
    inorder(root);
    cout << "Preorder transversal is:";
    preorder(root);
     cout << "Preorder transversal is:";
    postorder(root);
    return 0;
}