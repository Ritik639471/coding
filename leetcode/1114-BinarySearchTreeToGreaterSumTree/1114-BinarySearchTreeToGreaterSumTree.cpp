// Last updated: 4/13/2026, 3:34:28 PM
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
    int i=0;
    void helper(TreeNode* root){
        if(root==NULL) return;
        helper(root->right);
        root->val+=i;
        i=root->val;
        helper(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        helper(root);
        return root;
    }
};