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
    
    
            //Best for time complexity
       ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
           int r=0,s;
           ListNode* head = new ListNode();
           ListNode* temp = head;
           while(l1!=nullptr || l2!=nullptr){
               s=0;
               if(l1) s+=l1->val;
               if(l2) s+=l2->val;
               s+=r;
               if(s>9){
                   s=s%10;
                   r=1;
               }else r=0;
               head->next = new ListNode(s);
               head = head->next;
               if(l1) l1=l1->next;
               if(l2) l2=l2->next;
           }
           if(r>0) head->next = new ListNode(1);
           return temp->next;
           
    }
     
    
    
            //Best for space complexity
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int r=0;
//         ListNode* head = l1;
//         ListNode* head2 = l2;
//         ListNode* L1 = l1;
//         ListNode* L2 = l2;
//         while(L1!=nullptr && L2!=nullptr){
//             if(L1->val+L2->val+r>9){
//                 L1->val = L2->val = ((L1->val+L2->val+r)%10);
//                 r = 1;
//             }else{
//                 L1->val = L2->val = (L1->val+L2->val+r);
//                 r = 0;
//             }
//             cout<<"0"<<":"<<L2->val<<endl;
//             L1 = L1->next;
//             L2 = L2->next;
//         }
        
        
//         if(L1!=nullptr){
//             while(L1!=nullptr){
//                 cout<<"1"<<endl;
//                 if(L1->val+r>9){
//                     L1->val = ((L1->val+r)%10);
//                     r = 1;
//                 }else{
//                     L1->val = (L1->val+r);
//                     r = 0;
//                 }
//                 L1 = L1->next;
//             }
        
//         if(r==1){
//             while(head->next!=nullptr){
//                 head=head->next;
//             }
//             head->next = new ListNode(1);
//         }
//         return l1;
//         }else{
//             while(L2!=nullptr){
//                 cout<<"2"<<endl;
//                 if(L2->val+r>9){
//                     L2->val = ((L2->val+r)%10);
//                     r = 1;
//                 }else{
//                     L2->val = (L2->val+r);
//                     r = 0;
//                 }
//                 L2 = L2->next;
//             }
        
//         if(r==1){
//             while(head2->next!=nullptr){
//                 head2=head2->next;
//             }
//             head2->next = new ListNode(1);
//         }
//         return l2;
//         }
//     }
};
