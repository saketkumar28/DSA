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
        if (head->next==NULL) return 1;
        if (head->next->next==NULL) return (head->val==head->next->val);
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr=slow;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* neww=curr->next;
            curr->next=prev;
            prev=curr;
            curr=neww;
        }
        ListNode* newhead=prev;
        while(newhead!=NULL && temp!=NULL){
            if (newhead->val!=temp->val) return 0;
            newhead=newhead->next;
            temp=temp->next;
        }

        return 1;
        
    }
};