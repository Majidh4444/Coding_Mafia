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
    ListNode* removeElements(ListNode* head, int val) {
        while((head) && head->val==val) head= head->next;
        if(!head) return head;
        ListNode* temp = head->next;
        ListNode* trace = head;
        while(temp){
            if(temp->val==val){
                trace->next = temp->next;
                temp = temp->next;
                continue;
            }
            temp = temp->next;
            trace = trace->next;
        }
        return head;
    }
};
