/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

void invert(Tree* root){
    swap(root->left,root->right);
    if(root->left) invert(root->left);
    if(root->right) invert(root->right);
}

Tree* solve(Tree* root) {
    if(!root) return root;
    invert(root);
    return root;
}
