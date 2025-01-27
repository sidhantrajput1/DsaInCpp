#include<bits/stdc++.h>
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

void displayTree(TreeNode* root) {
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(TreeNode* root) {
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int product(TreeNode* root) {
    if(root==NULL) return 1;
    return ((root->val) * (product(root->left)) * (product(root->right)));
}

int size(TreeNode* root) {
    if (root==NULL) return 0;
    return 1 + size(root->left) + size(root->right); 
}

int level(TreeNode* root) {
    if(root==NULL) return 0;
    int leverL = level(root->left);
    int levelR =  level(root->right);
    return 1 + max(leverL, levelR);
}

int maxValue(TreeNode* root) {
    if(root==NULL) return INT_MIN;
    int leverL = maxValue(root->left);
    int levelR =  maxValue(root->right);
    return max(root->val , max(leverL, levelR));
}

int minvalue(TreeNode* root) {
    if(root==NULL) return INT_MAX;
    int leverL = minvalue(root->left);
    int levelR =  minvalue(root->right);
    return min(root->val , min(leverL, levelR));
}

int main () {
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
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<product(a);
    cout<<endl;
    cout<<size(a)<<endl;
    cout<<level(a)<<endl;
    cout<<maxValue(a)<<endl;
    cout<<minvalue(a)<<endl;
}