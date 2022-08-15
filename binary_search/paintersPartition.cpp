//this problem is similar to book allocation problem
bool isValid(vector<int> boards,int k, int mid){
   
    int pCount = 1;
    int timeTaken = 0;
    for(int i =0;i<boards.size();i++){
        if(timeTaken + boards[i]<= mid){
            timeTaken+=boards[i];
        }else{
            pCount++;
            if(pCount > k || boards[i] > mid){
                return false;
            }
            timeTaken = boards[i];
        }
        
    }
    return true;
}

long long int findLargestMinDistance(vector<int> &boards, int k)
{  
   long long int start = 0;
   long long int sum = 0;
    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    int ans = -1;
    long long int end = sum;
    long long mid = start + (end-start)/2;
    while(start <= end ){
        if(isValid(boards,k,mid)){
            ans = mid;
            end = mid -1;
        }else{
            start = mid +1;
        }
         mid = start + (end-start)/2;
    }
    
    return ans;
    
}