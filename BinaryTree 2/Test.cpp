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
// root -> left -> right 
void preorder(TreeNode* root) {
    if(root == NULL) return;
    cout<<root->val<<" "; // root
    preorder(root->left);
    preorder(root->right);
}

// inorder traversal
// left -> root -> right
void inorder(TreeNode* root) {
    if(root == NULL) return;
    inorder(root->left); // left
    cout<<root->val<<" "; // root
    inorder(root->right); // right
}

// postorder traversal
// left -> right -> root
void postorder(TreeNode* root) {
    if(root == NULL) return;
    postorder(root->left); // left
    postorder(root->right); // right
    cout<<root->val<<" "; // root
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

    preorder(a);
    cout<<endl;

    inorder(a);
    cout<<endl;

    postorder(a);
    cout<<endl;
}