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

// print the tree using preorder traversal
void preorder(TreeNode* root) {
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

// print element of nth level
void printNthLevelOfElement(TreeNode* root, int curr, int level) {
    if(root==NULL) return;
    if(curr == level) cout<<root->val<<" ";
    printNthLevelOfElement(root->left, curr+1, level);
    printNthLevelOfElement(root->right, curr+1, level);
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
    printNthLevelOfElement(a, 1, 3);
}