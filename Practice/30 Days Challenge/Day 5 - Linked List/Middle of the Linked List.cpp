// Use i=1 variable
// mid = head
// when i is divisible by 2 increment mid

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* mid = head;
        int i = 1;
        while(head){
            if(i%2 == 0) mid = mid->next;
            i++;
            head = head->next;
        }
        return mid;
    }
};