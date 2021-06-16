/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

vector<int> solve(Tree* root) {
    vector<int> v;
    queue<Tree*> q;
    v.push_back(root->val);
    if(root->left) q.push(root->left);
    if(root->right) q.push(root->right);
    while(!q.empty()){
        v.push_back(q.front()->val);
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
    }
    return v;
}
