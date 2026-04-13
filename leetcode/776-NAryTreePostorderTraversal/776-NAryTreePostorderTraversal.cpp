// Last updated: 4/13/2026, 3:35:41 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void helper(Node* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        int n=root->children.size();
        if(n>0){
        for(int i=0;i<n;i++){
            helper(root->children[i],ans);
        }}
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};