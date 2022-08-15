// to be done in 3 steps
/*
1st step is to make a function an check if characters are valid or not
2nd step to make a function to convert all uppercase to lower case
3rd step is to check from start to end is a[start]==a[end] or not s++ e--

*/

//neetcode approach


bool isPalindrome(string s) {
        // this will be done using 2 pointer method
        //we ca use another method in which we use a temp string and insert all valid charcters 
        //in it and then check palindrome condition.
        int i=0;
        
        int j=s.length()-1;
        while(i<j){
            while(!isalnum(s[i]) && i<j){
                i++;
            }
            while(!isalnum(s[j]) && i<j){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j]) ){
                return false;
            }
            i++;
            j--;
            
        }
        return true;
        
    }