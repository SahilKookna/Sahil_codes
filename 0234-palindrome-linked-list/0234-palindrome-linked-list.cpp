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
        ListNode* temp1=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL){
            ListNode* temp=slow;
            ListNode* prev=NULL;
            while(temp!=NULL){
                ListNode* front=temp->next;
                temp->next=prev;
                prev=temp;
                temp=front;
            }
            while(prev!=NULL){
                if(temp1->val!=prev->val){
                    return false;
                }
                temp1=temp1->next;
                prev=prev->next;
            }
            
        }
        if(fast!=NULL){
            ListNode* temp=slow->next;
            ListNode* prev=NULL;
            while(temp!=NULL){
                ListNode* front=temp->next;
                temp->next=prev;
                prev=temp;
                temp=front;
            }
            while(prev!=NULL){
                if(temp1->val!=prev->val){
                    return false;
                }
                temp1=temp1->next;
                prev=prev->next;
            }
            
        }
        return true;
    }
};