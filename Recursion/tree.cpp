#include<iostream>
using namespace std;


class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = this->right = nullptr;
    }
};


void display(TreeNode* root) {
    if (root == nullptr) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int sum(TreeNode* root) {
    if (root == nullptr) return 0;
    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    return root->val + leftSum + rightSum;
}

int size(TreeNode* root) {
    if (root == nullptr) return 0;
    return 1 + size(root->left) + size(root->right);
}

int main() {
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;

    display(a);
    cout<<endl;
    cout<<"Sum is "<<sum(a);
    cout<<endl;
    cout<<"Size is "<<size(a);
    // cout<<endl;
    // cout<<"Sum is "<<sum(a);
}