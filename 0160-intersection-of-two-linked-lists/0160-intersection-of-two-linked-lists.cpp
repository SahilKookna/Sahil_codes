/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * ans=new ListNode(0);
        unordered_map<ListNode*, int> mp;
        ListNode* first=headA;
         ListNode* second=headB;
         while(first!=NULL){
            mp[first]++;
            first=first->next;
         }
         while(second!=NULL){
            if(mp.find(second)!=mp.end()){
                ans->val=second->val;
                return ans;
            }
            second=second->next;
         }
         return NULL;
    }
};