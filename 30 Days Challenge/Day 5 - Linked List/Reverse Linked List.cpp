// Follow the order
// while(curr)
// nxt = curr->next
// curr->next = prev
// prev = curr
// curr = nxt
// return prev

class Solution {
public:
    ListNode* reverseList(ListNode* li){
        ListNode* prev = nullptr;
        ListNode* curr = li;
        ListNode* nxt;
        
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        return prev;
    }
};