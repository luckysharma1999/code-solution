bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        //taking initial value as last element of 1st row
        int ri = 0;    //row index
        int ci = c -1; //column index
        
        while(ri<r && ci>=0){
             
            int ele = matrix[ri][ci];
            if(ele == target){
                return 1;
            }
            else if(ele > target){
                ci--;
            }
            else{
                ri++;
            }
        }
        return 0;
    }