// If reached the end then equate the pointer again to opposite pointer head;
// run while loop till a!=b
// if equal return a

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            if(a!=NULL) a=a->next;
            else a=headA;
            if(b!=NULL) b=b->next;
            else b=headB;
        }
        return a;
    }
};