class Solution {
public:
    int rows;
    int columns;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        rows = matrix.size();
        if(rows==0) return false;
        columns = matrix[0].size();
        
        int right = rows*columns-1;
        int left = 0;
        while(left<=right){
            int mid = (left+right)/2;
            int r = mid/columns;
            int c = mid%columns;
            if(matrix[r][c]<target){
                left = mid+1;
            }else if(matrix[r][c]>target){
                right = mid-1;
            }else{
                return true;
            }
        }
        return false;
    }
    
};