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
   void solve(TreeNode* root,vector<TreeNode*>& v){
        if(!root)return;
        v.push_back(root);
        solve(root->left,v);
        solve(root->right,v);
        return;
    }
    
    void flatten(TreeNode* root) {
        TreeNode* head;
        vector<TreeNode*>v;
        solve(root,v);
        head=root;
        
        for(int i=1;i<v.size();i++){
            head->left=NULL;
            head->right=v[i];
            head=head->right;
        }
        
        if(head){
        head->right=NULL;
        head->left=NULL;
        }
        
        return;
    }
};