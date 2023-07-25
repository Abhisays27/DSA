#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val) {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(TreeNode<int>* root) {
    if (root == NULL)
        return;

    queue<TreeNode<int>*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode<int>* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
}

int main() {
    // Example binary tree:
    //          1
    //         / \
    //        2   3
    //       / \   \
    //      4   5   6

    TreeNode<int>* root = new TreeNode<int>(1);
    root->left = new TreeNode<int>(2);
    root->right = new TreeNode<int>(3);
    root->left->left = new TreeNode<int>(4);
    root->left->right = new TreeNode<int>(5);
    root->right->right = new TreeNode<int>(6);

    cout << "Level-order traversal: ";
    levelOrderTraversal(root);

    return 0;
}
