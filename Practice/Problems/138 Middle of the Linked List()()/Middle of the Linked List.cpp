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
        if(!(head->next)) return head;
        ListNode* m = head;
        head = head->next;
        int i=2;
        while(head){
            if(i==2){
                m=m->next;
                i=0;
            }
            head = head->next;
            i++;
        }
        cout<<m->val;
        return m;
    }
};
