// 1 2 3 4 5 4 3 2 1
// Using fast and slow pointer find middle node
// above case middle is 5
// use prev pointer to track of slow's previous pointer
// make prev->next = NULL here 4->next = NULL
// from 5 reverse the list
// 1 2 3 4 1 2 3 4 5
// Check node values for head and slow one by one if not equal return 0
// if equal return 1

class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode *curr = head, *prev = nullptr, *nxt = nullptr;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head, *slow = head;
        ListNode* prev = slow;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = nullptr;
        slow = reverse(slow);
        while(slow && head){
            if(head->val != slow->val) return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};