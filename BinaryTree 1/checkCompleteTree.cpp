#include<iostream>
#include<queue>

using namespace std;

// LEETCODE : 958
// Given the root of a binary tree, determine if it is a complete binary tree.



class TreeNode {
public : 
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void displayTree(TreeNode* root) {
    if (root == nullptr) return;
    cout<<root->data<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

bool checkCompleteTree(TreeNode* root) {
    // if(root == nullptr)

    queue<TreeNode*> qu;
    qu.push(root);

    while(!qu.empty()) {
        int level = qu.size();

        for (int i = 1; i <= level; i++) {
            auto node = qu.front();
            qu.pop();

            if (node->left == nullptr) qu.push(node->left);
            if (node->right == nullptr) qu.push(node->right);

            if (node == nullptr) return false;
        }
    }

    return true;
}

int main() {
    TreeNode* a = new TreeNode(1); // root node
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
    cout<<checkCompleteTree(n);
}