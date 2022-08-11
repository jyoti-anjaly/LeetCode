/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> x;
    void func(TreeNode* root){
        if(root==NULL)return;
        func(root->left);
        x.push_back(root->val);
        func(root->right);
    }
    bool isValidBST(TreeNode* root) {
        func(root);
        for(int i=0;i<x.size()-1;i++){
            if(x[i+1]<=x[i])return false;
        }
        return true;
    }
};