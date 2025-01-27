#include<iostream>
using namespace std;

class Node { // This is TreeNode
    public : 
        int val;
        Node* left; // like Node* next but it's different
        Node* right;
        Node(int val) {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void displayTree(Node* root) {
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(Node* root) {
    if(root==NULL) return 0;
    // int leftSum = sum(root->left);
    // int rightSum =  sum(root->right);
    // int ansSum = root->val + leftSum + rightSum;
    // int ansSum = root->val + sum(root->left) + sum(root->right);
    return root->val + sum(root->left) + sum(root->right);
};

int product(Node* root) {
    if(root == NULL) return 1;
    return ((root->val) * (product(root->left)) * (product(root->right)));
}

int size(Node* root) {
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right); 
}

int maxNode(Node* root) {
    if(root == NULL) return INT8_MIN;
    int lMax = maxNode(root->left);
    int rMax = maxNode(root->right);
    return max(root->val , max(lMax, rMax));
}

int minNode(Node* root) {
    if(root == NULL) return INT8_MAX;
    int lMin = minNode(root->left);
    int rMin = minNode(root->right);
    return min(root->val, min(lMin, rMin));
}

int level(Node* root) {
    if(root == NULL) return 0;
    int levelL = level(root->left);
    int levelR = level(root->right); 
    return 1 + max(levelL, levelR);
}

int main() {
    Node* a = new Node(1); // root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(8);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout<<endl;
    // int ans = sum(a);
    // cout<<ans<<endl;
    // int ans1 = size(a);
    // cout<<ans1<<endl;
    // cout<<maxNode(a)<<endl;
    // cout<<product(a)<<endl;
    // cout<<minNode(a)<<endl;
    cout<<level(a)<<endl;
    cout<<product(a)<<endl;
    cout<<size(a)<<endl;
}

// full binary tree // o or 2 child
// Perfect tree , last level have tree is no leaf node
// complete binary tree
// balanced binary tree
// 1. 