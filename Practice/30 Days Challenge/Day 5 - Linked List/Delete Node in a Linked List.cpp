// node->val = node->next->val
// node->next = node->next->next

class Solution {
public:
    //Much Faster than below
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};