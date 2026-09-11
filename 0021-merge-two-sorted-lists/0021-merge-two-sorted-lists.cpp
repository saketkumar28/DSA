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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1==NULL && list2==NULL) return NULL;
        else if (list1==NULL) return list2;
        else if (list2==NULL) return list1;
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode dummy;
        ListNode* mover=&dummy;
        while(t1!=NULL && t2!=NULL){
            if (t1->val<=t2->val){
                mover->next=t1;
                t1=t1->next;
            }
            else{
                mover->next=t2;
                t2=t2->next;
            }
            mover=mover->next;
        }
        while(t1!=NULL){
            mover->next=t1;
            t1=t1->next;
            mover=mover->next;
        }
        while(t2!=NULL){
            mover->next=t2;
            t2=t2->next;
            mover=mover->next;
        }
        mover->next=NULL;
        return dummy.next;

    }
};