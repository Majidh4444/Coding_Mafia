/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void getSum(TreeNode* root, int l, int h, int* sum){
        if(!root) return;
        if(root->val >= l && root->val <= h) *sum += root->val;
        getSum(root->left,l,h,sum);
        getSum(root->right,l,h,sum);
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        getSum(root, low, high, &sum);
        return sum;
    }
};
