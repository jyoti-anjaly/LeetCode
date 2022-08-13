/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          int minN=min(p->val,q->val);
        int maxV=max(p->val,q->val);
        
        while(root!=nullptr){
            if(root->val <minN)
                root=root->right;
            else if(root->val > maxV)
                root=root->left;
            else
                return root;
        }
        return nullptr;
    }
};