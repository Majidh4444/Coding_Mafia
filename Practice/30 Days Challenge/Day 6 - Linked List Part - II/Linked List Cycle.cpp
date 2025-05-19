// Use fast and slow pointers and return when fast->nextt == NULL or when any of the pointer reached the end after breaking from loop

class Solution {
public:
    bool hasCycle(ListNode *head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && slow){
            if(fast->next) fast = fast->next->next;
            else return false;
            slow = slow->next;
            if(slow == fast) return true;
        }
        return false;
    }
};