/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //Much Faster than below
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }

    
    
//     void deleteNode(ListNode* node) {
//         while(node->next->next!=NULL){
//             node->val = node->next->val;
//             node = node->next;
//         }
//         node->val = node->next->val;
//         node->next = NULL;
//     }
};
