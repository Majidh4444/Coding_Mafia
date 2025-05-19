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
    queue<int> q;
    void checkOne(TreeNode* root){
        if(!root){
            q.push(0);
            return;
        }
        q.push(root->val);
        checkOne(root->left);
        checkOne(root->right);
    }
    
    bool checkTwo(TreeNode* root){
        int a = q.front();
        q.pop();
        if(!root && a != 0) return false;
        if(root && root->val != a) return false;
        if(!root & a== 0) return true;
        return (checkTwo(root->right) && checkTwo(root->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        checkOne(root->left);
        bool a = checkTwo(root->right);
        if(!q.empty() && a) return false;
        return a;
    }
};
