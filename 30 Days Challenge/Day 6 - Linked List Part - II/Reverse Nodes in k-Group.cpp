// Use Recursion first check the list with k values if no k nodes present return head
// if present reverse the k nodes and call head->next = rec(curr,k)
// return prev

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* n = head;
        for(int i=0;i<k;i++){
            if(!n) return head;
            n = n->next;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nxt = nullptr;
        int i = k;
        while(i--){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};