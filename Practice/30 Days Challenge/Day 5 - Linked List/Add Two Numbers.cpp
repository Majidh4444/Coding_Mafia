// take sum = 0 and remainder = 0
// every iteration make sum = 0
// if l1 exits add to sum same with l2 also and also increment l1 and l2

// if sum>9 
//          remainder = sum/10
//          sum = sum%10
// else remainder = 0

class Solution {
public: 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int s=0, r=0;
        ListNode* head = new ListNode();
        ListNode* temp = head;
        while(l1 || l2){
            s = 0;
            if(l1){
                s += l1->val;
                l1 = l1->next;
            }
            if(l2){
                s += l2->val;
                l2 = l2->next;
            }
            s += r;
            if(s>9){
                r = s/10;
                s %= 10;
            }else r = 0;
            temp->next = new ListNode(s);
            temp = temp->next;
        }
        
        if(r != 0) temp->next = new ListNode(r);
        return head->next;
    }
}