//       9
//    7      8
//   5        6
// 2           3
// a mountain array looks like this ^
// we use modified binary search to get this in O(logn)
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size()-1;
        int mid = start + (end-start)/2;
        while(start<end){// using s< e intead of <= becoz in the last two element left we already 
                        //compare the elements
            if(arr[mid] < arr[mid+1]){//checking on the increasing line 
                start = mid + 1;
            }else{
                end = mid;//mid element could be the peak so we use mid instead of mid - 1
            }
            mid = start + (end-start)/2;
        }
        return start;
        
    }



