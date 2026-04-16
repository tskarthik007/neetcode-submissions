class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false; // Handle edge case where matrix is empty or has zero columns
        }

        
        int row = matrix.size();
        int col = matrix[0].size();

        int row_l = 0;
        int row_r = row-1;
        int row_m;

        while(row_l<=row_r){
            row_m = row_l+((row_r-row_l)/2);

            // if(matrix[row_m][0]<=target && matrix[row_m][col-1]>=target){
                
            // }

            if(target < matrix[row_m][0])
                row_r=row_m-1;
            
            else if(target > matrix[row_m][col-1])
                row_l=row_m+1;
            
            else 
                break;
        }

        if(row_l>row_r)
            return false;
        
        int l=0;
        int r=col-1;

        while(l<=r){
            int m = l+((r-l)/2);
            
            if(matrix[row_m][m]==target)
                return true;
            else if(target > matrix[row_m][m])
                l=m+1;
            else
                r=m-1;
        }

        return false;

    }
};
