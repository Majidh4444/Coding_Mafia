// while(n--) increment temp
// if(!temp) return head->next
// while(temp->next) increment both
// node->next = node->next->next
// return head
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return head->next;
        ListNode* temp = head;
        ListNode* node = head;
        while(n--) temp = temp->next;
        if(!temp) return head->next;
        while(temp->next){
            node = node->next;
            temp = temp->next;
        }
        node->next = node->next->next;
        return head;
    }
};