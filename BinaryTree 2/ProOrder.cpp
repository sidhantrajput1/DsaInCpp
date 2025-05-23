#include<iostream>
#include<queue>
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


void printNthLevelOfElementInReverse(TreeNode* root, int curr, int level) {
    if(root==NULL) return;
    if(curr == level) {
        cout<<root->val<<" "; // root
        return;
    }
    printNthLevelOfElementInReverse(root->right, curr+1, level); // right
    printNthLevelOfElementInReverse(root->left, curr+1, level); // left
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

void leveltraversalReverse(TreeNode* root) {
    int n = levels(root);
    for(int i = 1; i <= n; i++) {
        printNthLevelOfElementInReverse(root, 1, i);
        cout<<endl;
    }
}

// level order tree traversal using queue 
void levelOrderQueue(TreeNode* root) {
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

    // preorder(a);
    // cout<<endl;
    printNthLevelOfElement(a, 1, 3);
    cout<<endl;

    // level traversal
    leveltraversal(a);
    cout<<endl;
    // leveltraversalReverse(a); 
    levelOrderQueue(a);
}