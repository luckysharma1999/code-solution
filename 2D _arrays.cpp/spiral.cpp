vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int sr = 0; // starting row
        int ec = n-1; // ending column
        int er = m-1; // ending row
        int sc = 0;  // starting column
        
        int count = 0;
        int total = m*n;
        
        while(count < total){
            for(int index = sc ; count < total && index<=ec ;index++){
                ans.push_back(matrix[sr][index]);
                count++;
            }
            sr++;
            
            for(int index = sr ; count < total && index<=er ;index++){
                ans.push_back(matrix[index][ec]);
                count++;
            }
            ec--;
            
            for(int index = ec ; count < total && index>=sc ;index--){
                ans.push_back(matrix[er][index]);
                count++;
            }
            er--;
            
            for(int index = er ; count < total && index>=sr ;index--){
                ans.push_back(matrix[index][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }