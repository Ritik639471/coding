// Last updated: 4/13/2026, 3:38:20 PM
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
    vector<int>ans;
    void helper(TreeNode* root,int n){
        if(root==NULL) return;
        if(ans.size()==n) ans.push_back(root->val);
        helper(root->right,n+1);
        helper(root->left,n+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        ans=vector<int>();
        helper(root,0);
        return ans;
    }
};