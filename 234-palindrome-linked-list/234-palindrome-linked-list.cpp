/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
         vector<int>v;
         vector<int>ve;
         ListNode*temp=head;
        do{
            v.push_back(temp->val);
            ve.push_back(temp->val);
            temp=temp->next;
        }while(temp!=NULL);
        reverse(v.begin(),v.end());
        if(v==ve)
            return true;
        return false;
    }
};