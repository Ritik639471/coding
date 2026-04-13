// Last updated: 4/13/2026, 3:39:32 PM
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
    void helper(TreeNode* root,int& num,int n){
        if(root==NULL) return;
        num=max(num,n+1);
        helper(root->left,num,n+1);
        helper(root->right,num,n+1);
    }
public:
    int maxDepth(TreeNode* root) {
        int max=0;
        helper(root,max,0);
        return max;
    }
};