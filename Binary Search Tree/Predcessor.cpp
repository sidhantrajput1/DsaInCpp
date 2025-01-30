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

void inorder(TreeNode* root) {
    if(root == NULL) return;
    inorder(root->left); // left
    cout << root->val << " "; // root
    inorder(root->right); // right
}
// step1 :-> go left once
// step2 : keep going right if possible
int inOrderPredcessor(TreeNode* root) {
    if(root==NULL || root->left==NULL) return -1; 
    TreeNode* pred = root->left;
    while(pred->right != NULL) pred = pred->right;
    return pred->val;
}

// step1 :-> go right once
// step2 : keep going left if possible
int inOrderSuccessor(TreeNode* root) {
    if(root==NULL || root->right==NULL) return -1; 
    TreeNode* pred = root->right;
    while(pred->left != NULL) pred = pred->left;
    return pred->val;
}

int main() {
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(20);
    TreeNode* d = new TreeNode(2);
    TreeNode* e = new TreeNode(8);
    TreeNode* f = new TreeNode(15);
    TreeNode* g = new TreeNode(25);
    TreeNode* h = new TreeNode(4);
    TreeNode* i = new TreeNode(12);
    TreeNode* j = new TreeNode(13);
    TreeNode* k = new TreeNode(3);

    // Correct tree structure
    a->left = b;
    a->right = c;
    
    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    d->right = h;
    
    f->left = i;
    
    h->left = k;

    i->right = j;

    inorder(a);
    cout<<endl;
    cout<<inOrderPredcessor(a)<<endl;
    cout<<inOrderSuccessor(a)<<endl;

    return 0;
}
