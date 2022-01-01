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
    ListNode* middleNode(ListNode* head) {
        if(!head->next) return head;
        
        ListNode* mid = head;
        int n = 1;
        
        while(head){
            if(n%2 == 0) mid = mid->next;
            n++;
            head = head->next;
        }
        
        return mid;
    }
};