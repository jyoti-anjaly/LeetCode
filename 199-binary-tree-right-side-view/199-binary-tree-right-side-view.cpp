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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL) 
        {
            return res;
        }
        TreeNode *temp;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int k=q.size();
            for(int i=1;i<=k;i++)
            {
                temp=q.front();
                q.pop();
                if(i==1) res.push_back(temp->val);
                if(temp->right!=NULL)
                    q.push(temp->right);
                if(temp->left!=NULL)
                    q.push(temp->left);
            }
        }
        return res;
    }
};