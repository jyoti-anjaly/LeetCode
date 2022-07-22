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
    ListNode* partition(ListNode* head, int x) {
        if(!head) 
            return head;
        partition(head->next, x);
        ListNode* temp=head;
        while(temp->next && (temp->val>=x && temp->next->val<x)){
            swap(temp->val, temp->next->val);
            temp=temp->next;
        }
        return head;
    }
};