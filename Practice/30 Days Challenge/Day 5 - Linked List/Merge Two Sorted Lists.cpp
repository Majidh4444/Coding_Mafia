// l1 = 1 2 3 4
// l2 = 5 6 7 8
// Use recursion
// if l1 == NULL return l2
// if l2 == NULL return l1
// l1>l2 => l2 = rec(l1,l2->next)
// else l1 = rec(l1->next, l2)
// return less val pointer

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val > l2->val) l2->next = mergeTwoLists(l1,l2->next);
        else{
            l1->next = mergeTwoLists(l1->next, l2);
            l2 = l1;
        }
        return l2;
    }
};