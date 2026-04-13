// Last updated: 4/13/2026, 3:40:05 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int l=0,r=m-1,mid;
        while(l<r){
            mid=(l+r)/2;
            if(matrix[mid][0]==target){return true;}
            else if(matrix[r][0]<=target){l=r;}
            else if(matrix[l][0]>target) return false;
            else if(matrix[mid][0]<target) l=mid;
            else r=mid-1;
            if(l+1==r && matrix[r][0]>target) r-=1;
            if(l+1==r && matrix[r][0]==target) l=r;
        }
        m=l;
        l=0;
        r=n-1;
        while(l<=r){
            mid=(l+r)/2;
            if(matrix[m][mid]==target){return true;}
            else if(matrix[m][mid]<target) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};