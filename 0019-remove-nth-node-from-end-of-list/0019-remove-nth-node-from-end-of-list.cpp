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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        } 
        temp=head;
        if (cnt==n){
            return head->next;
        }
        int ctr=0;
        while(temp!=NULL){
            ctr++;
            if (ctr==cnt-n) break;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};