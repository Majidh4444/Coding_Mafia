// Detect cycle and break from loop
// if(slow == NULL or fast == NULL) return NULL
// make fast = head
// while(slow != fast) increment pointer
// return slow

class Solution{
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while(slow && fast){
            if(fast->next) fast = fast->next->next;
            else return NULL;
            slow = slow->next;
            if(slow == fast) break;
        }
        if(!fast || !slow) return NULL;
        fast = head;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};