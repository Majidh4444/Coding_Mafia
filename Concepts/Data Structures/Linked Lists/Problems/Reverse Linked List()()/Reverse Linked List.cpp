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
    ListNode* reverseList(ListNode* li) {
        if(!li || !(li->next)) return li;
        ListNode* head;
        ListNode* tail = new ListNode(li->val);
        li=li->next;
        while(li){
            ListNode* head = new ListNode(li->val);
            head->next = tail;
            tail = head;
            li=li->next;
        }
        return tail;
    }
};
