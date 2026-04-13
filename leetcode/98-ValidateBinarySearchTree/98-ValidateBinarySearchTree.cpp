// Last updated: 4/13/2026, 3:39:39 PM
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
    queue<int>q;
    void helper(TreeNode* root){
        if(root==NULL) return;
        helper(root->left);
        q.push(root->val);
        helper(root->right);
    }
    bool isValidBST(TreeNode* root) {
        helper(root);
        int n=q.front();
        q.pop();
        while(q.size()!=0){
            if(n>=q.front()) return false;
            n=q.front();
            q.pop();
        }
        return true;
    }
};