// Last updated: 4/13/2026, 3:32:59 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m,vector<int>(n,-1));
        if(head==NULL) return matrix;
        int r1=0,r2=m-1,c1=0,c2=n-1;
        int j=0;
        while(r1<=r2&&c1<=c2){
            for(int i=c1;j<m*n&&i<=c2;i++){
                matrix[r1][i]=head->val;
                head=head->next;
                if(head==NULL) return matrix;
                j++;
            }
            ++r1;
            for(int i=r1;j<m*n&&i<=r2;i++){
                matrix[i][c2]=head->val;
                head=head->next;
                if(head==NULL) return matrix;
                j++;
            }
            --c2;
            for(int i=c2;j<m*n&&i>=c1;i--){
                matrix[r2][i]=head->val;
                head=head->next;
                if(head==NULL) return matrix;
                j++;
            }
            --r2;
            for(int i=r2;j<m*n&&i>=r1;i--){
                matrix[i][c1]=head->val;
                head=head->next;
                if(head==NULL) return matrix;
                j++;
            }
            ++c1;
        }
        return matrix;
    }
};