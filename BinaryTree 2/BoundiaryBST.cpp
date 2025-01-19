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
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

TreeNode* construct(int arr[], int n) {
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size() > 0 && i < n) {
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i] != INT_MIN) l = new TreeNode(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT_MIN) r = new TreeNode(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}


// print element of nth level
void printNthLevelOfElement(TreeNode* root, int curr, int level) {
    if(root==NULL) return;
    if(curr == level) {
        cout<<root->val<<" ";
        return;
    }
    printNthLevelOfElement(root->left, curr+1, level);
    printNthLevelOfElement(root->right, curr+1, level);
}

// find the level fo tree
int levels(TreeNode* root) {
    if(root==NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}

// bfs traversal
void leveltraversal(TreeNode* root) {
    int n = levels(root);
    for(int i = 1; i <= n; i++) {
        printNthLevelOfElement(root, 1, i);
        cout<<endl;
    }
}


void levelOrderQueue(TreeNode* root) {
    if(root==NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    while(q.size() > 0) {
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;
}

void rightTreeNode(TreeNode* root) {
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    cout<<root->val<<" ";
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
}


// Boundiary

void leftBoundary(TreeNode* root) {
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}

void bottomBoundary(TreeNode* root) {
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(TreeNode* root) {
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}

void Boundiary(TreeNode* root) {
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}

int main() {
    // construct
    int arr[] = {1, 7, 9, 2, 6, INT_MIN, 0, INT_MIN, INT_MIN, 8, 9, INT_MIN, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = construct(arr, n);

    // level order
    // levelOrderQueue(root);
    // leveltraversal(root);
    // leftBoundary(root);
    // cout<<endl;
    // bottomBoundary(root);
    // cout<<endl;
    // rightBoundary(root->right);
    Boundiary(root);
}