
    // Love babbar approach

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int start = 0;
        int end = m*n - 1;
        
        int mid = start + (end - start)/1;
        
        while(start <= end){
            int element = matrix[mid/n][mid%n];
            if(element == target){
                return 1;
            }else if(element <target){
                start = mid+1;
            }else{
                end = mid -1;
            }
            mid = start + (end - start)/1;
        }
        return 0;
    }

    //NeetCode approach
    //use two binary search methods
    // one to select the row in which element might be present
    // second to find if element is present in that row or not
