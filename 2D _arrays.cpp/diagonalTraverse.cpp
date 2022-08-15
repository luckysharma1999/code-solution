vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        int r = 0;
        int c = 0;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
    
        if(n==0 || m == 0) return ans;
        
        
        
        int count = 0;
        int total = m*n;
        
        while(count < total){
            ans.push_back(mat[r][c]);
            count++;
            
            if((r + c ) % 2 == 0 && count < total){
                //up
                if(c == n-1){r++ ; }

                else if(r == 0) c++;

                else{r--,c++;}
            }else if(count < total){
                //down
                if(r == m-1){c++ ; }

                else if(c == 0) r++;
                
                else{r++,c--;}
            }
        }
        return ans;
    }