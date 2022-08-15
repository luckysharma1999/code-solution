// This code is similar to binary search just a few changes in the code commented bellow.

int firstOcc(vector<int>& arr, int n, int k){
        int s=0, e=n-1;
        int mid = s +(e-s)/2;
        int ans = -1; // declare an ans variable and set its initial value to -1
        while(s<=e){
            if(arr[mid]==k){
                ans=mid;//after finding the element store the calue of mid in ans
                e=mid-1;//to check if there are any other occurences on left side set e =mid -1
            }else if(k>arr[mid]){
                s = mid+1;
            }else{
                e=mid-1;
            }
            mid = s + (e - s)/2;
            
        }
    return ans; // return ans
}
int lastOcc(vector<int>& arr, int n, int k){
        int s=0, e=n-1;
        int mid = s +(e-s)/2;
        int ans = -1;// declare an ans variable and set its initial value to -1
        while(s<=e){
            if(arr[mid]==k){
                ans=mid;//after finding the element store the calue of mid in ans
                s=mid+1;//to check if there are any other occurences on right side set e =mid -1
            }else if(k>arr[mid]){
                s = mid+1;
            }else{
                e=mid-1;
            }
            mid = s + (e - s)/2;
            
        }
    return ans; // return ans
}