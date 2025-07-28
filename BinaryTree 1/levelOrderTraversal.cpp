#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    
    if (root == nullptr) return {};
    
    queue<TreeNode*> q;
    q.push(root);
    
    while(q.size() > 0) {
        int level = q.size();
        
        // store the current level of tree
        vector<int> res;
        
        for (int i = 0; i < level; i++) {
            TreeNode* temp = q.front();
            q.pop();
            res.push_back(temp->data);
            
            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
        }
        
        ans.push_back(res);
    }
    return ans;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    vector<vector<int>> result = levelOrder(root);
    
    for (const auto& level : result) {
        for (int val : level) {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}