// Last updated: 4/13/2026, 3:39:24 PM
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
    void helper(TreeNode* root,vector<int> v,int sum){
        if(root==NULL) {
            return;
        }
        v.push_back(root->val);
        if(sum==root->val&&root->left==NULL&&root->right==NULL) {ans.push_back(v);return;}
        helper(root->left,v,sum-root->val);
        helper(root->right,v,sum-root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return {};
        helper(root,{},targetSum);
        return ans;
    }
};