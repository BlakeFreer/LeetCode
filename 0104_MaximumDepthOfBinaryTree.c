/**
 * @author Blake Freer
 * @date 2023-09-11
**/

// Definition for binary tree node
// Comment out if pasting into leetcode
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


int maxDepth(struct TreeNode* root){
    int lDepth = 0;
    int rDepth = 0;
    if(!root) {
        return 0;
    }
    if(root->left){
        lDepth = maxDepth(root->left);
    }
    if(root->right){
        rDepth = maxDepth(root->right);
    }
    int max = lDepth > rDepth ? lDepth : rDepth;
    return max + 1;
}