int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    // int mid =(start+end)/2; //try avoiding this formula
    int mid = start + (end-start)/2;//for reason check diary 9 jan
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid = start + (end-start)/2;
    }
    return -1;

}