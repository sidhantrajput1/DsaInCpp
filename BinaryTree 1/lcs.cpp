#include<iostream>

using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->data = val;
        this->left = this->right = NULL;
    }
};

void displayTree(TreeNode* root) {
    if (root == nullptr) return;
    cout<<root->data<<" ";
    displayTree(root->left);
    displayTree(root->right);
}


TreeNode* lcs(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == NULL) return NULL;

    if (root == p || root == q) return root;

    TreeNode* leftN  = lcs(root->left, p, q);
    TreeNode* rightN = lcs(root->right, p, q);

    if (leftN != NULL && rightN != NULL) return root;

    return leftN != NULL ? leftN : rightN;
}

int main() {
    TreeNode* a = new TreeNode(3); // root node
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(1);
    TreeNode* d = new TreeNode(6);
    TreeNode* e = new TreeNode(2);
    TreeNode* f = new TreeNode(0);
    TreeNode* g = new TreeNode(8);
    TreeNode* h = new TreeNode(7);
    TreeNode* i = new TreeNode(4);

    a->left  = b;
    a->right = c;
    b->left  = d;
    b->right = e;
    c->left  = f;
    c->right = g;
    e->left  = h;
    e->right = i;

    // displayTree(a);

    TreeNode* ans = lcs(a, b, i);
    cout<<ans->data;
}