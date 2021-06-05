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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!(head) || !(head->next)) return head;
        ListNode* temp = head;
        ListNode* A = head;
        while(A){
            while((A->next) && A->val==A->next->val) A = A->next;
            temp->val = A->val;
            A = A->next;
            if(A) temp = temp->next;
        }
        temp->next= NULL;
        return head;
    }
};
