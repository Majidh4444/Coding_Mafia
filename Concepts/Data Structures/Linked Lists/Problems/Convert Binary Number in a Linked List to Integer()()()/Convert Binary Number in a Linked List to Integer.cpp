/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        long long n = powl(2, 30); 
		long long ans = 0;
		while(1)
		{
			ans += (head->val)*(n);  
            head = head->next;  
            if(head == nullptr) break;  
            n /= 2;
		}
		ans /= n;
		return ans;  
    }
};
