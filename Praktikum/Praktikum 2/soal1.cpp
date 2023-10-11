#include <iostream>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->value) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }

        return node;
    }

    void inorderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left);
        std::cout << node->value << " ";
        inorderTraversal(node->right);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value);
    }

    void inorder() {
        inorderTraversal(root);
    }
};

int main() {
    BinarySearchTree bst;

    for (int i = 0; i < 10; ++i) {
        int value;
        std::cin >> value;
        bst.insert(value);
    }

    bst.inorder();
    std::cout << std::endl;

    return 0;
}