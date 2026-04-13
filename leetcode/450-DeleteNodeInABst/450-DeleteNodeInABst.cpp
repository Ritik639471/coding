// Last updated: 4/13/2026, 3:36:53 PM
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(root->val<key){
            if(root->right==NULL) return root;
            root->right= deleteNode(root->right,key);
        }
        else if(root->val>key){
            if(root->left==NULL) return root;
            root->left= deleteNode(root->left,key);
        }
        else {
            TreeNode* temp=root,*prev=root;
            if(root->right!=NULL){
                temp=temp->right;
                if(temp->left==NULL){
                    prev->val=temp->val;
                    prev->right=temp->right;
                    return root;
                }
                while(temp->left!=NULL){
                    prev=temp;
                    temp=temp->left;
                }
                root->val=temp->val;
                prev->left=temp->right;
            }
            else if(root->left!=NULL){
                temp=temp->left;
                 if(temp->right==NULL){
                    prev->val=temp->val;
                    prev->left=temp->left;
                    return root;
                }
                while(temp->right!=NULL){
                    prev=temp;
                    temp=temp->right;
                }
                root->val=temp->val;
                prev->right=temp->left;
            }
            else return NULL;
        }
        return root;
    }
};