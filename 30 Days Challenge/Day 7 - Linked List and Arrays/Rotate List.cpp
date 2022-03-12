// Count the number of elements(n) and at the end point last elemnt next to head
// make k = k%n then n = n-k
// using while(n--) then head = temp->next and temp->next = null
// return head

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int n = 1;
        ListNode* temp = head;
        while(temp->next){
            temp = temp->next,n++;
        }
        k = k%n;
        temp->next = head;
        while(n>k){
            temp = temp->next;
            n--;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};