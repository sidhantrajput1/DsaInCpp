#include<iostream>
using namespace std;

class TreeNode {
public : 
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};

// preorder traversal
// void displayTree(TreeNode* root) {
//     if(root == NULL) return;
//     cout<<root->val<<" ";
//     displayTree(root->left);
//     displayTree(root->right);
// }

// inorder traversal
// void displayTree(TreeNode* root) {
//     if(root == NULL) return;
//     displayTree(root->left);
//     cout<<root->val<<" ";
//     displayTree(root->right);
// }

// postorder traversal
void displayTree(TreeNode* root) {
    if(root == NULL) return;
    displayTree(root->left);
    displayTree(root->right);
    cout<<root->val<<" ";
}

int main() {
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
}