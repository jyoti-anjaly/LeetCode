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
 
     bool extra(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        } else if (!p || !q) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        return extra(p->left,q->right) && extra(p->right, q->left); 
    }
    bool isSymmetric(TreeNode *root) {
        if (!root) return true;
        return extra(root->left, root->right);
    }
};