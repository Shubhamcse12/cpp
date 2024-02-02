#include <iostream>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};
TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}
void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        std::cout << root->value << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;

    root = insert(root, 8);
    insert(root, 3);
    insert(root, 10);
    insert(root, 1);
    insert(root, 6);
    insert(root, 14);
    insert(root, 4);
    insert(root, 7);
    insert(root, 13);

    std::cout << "In-order Traversal: ";
    inOrderTraversal(root);

    return 0;
}
