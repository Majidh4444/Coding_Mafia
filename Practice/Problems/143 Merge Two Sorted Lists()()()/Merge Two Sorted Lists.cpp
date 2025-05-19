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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        while(l1 && l2){
            if(l1->val <= l2->val){
                temp->next = new ListNode(l1->val);
                l1=l1->next;
            }
            else{
                temp->next = new ListNode(l2->val);
                l2=l2->next;
            }
            temp = temp->next;
        }
        
        if(l2) l1=l2;
        
        while(l1){
            temp->next = new ListNode(l1->val);
            temp = temp->next;
            l1 = l1->next;
        }
        
        return head->next;
    }
};
