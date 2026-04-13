// Last updated: 4/13/2026, 3:39:23 PM
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
    TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        if(prev==NULL) prev=root;
        else {prev->right=root;prev=root;}
        TreeNode* Ri=root->right;
        flatten(root->left);
        root->left=NULL;
        flatten(Ri);
    }
};