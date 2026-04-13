// Last updated: 4/13/2026, 3:39:35 PM
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
    vector<vector<int>>ans;
    void helper(TreeNode* root,int n){
        if(root==NULL) return;
        ans[n].push_back(root->val);
        helper(root->left,n+1);
        helper(root->right,n+1);
    }
    int help(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(help(root->left),help(root->right));
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        ans=vector<vector<int>>(help(root));
        helper(root,0);
        return ans;
    }
};