//Reverse an array
//1 3 2 4 
// use swap and s++ e-- till s<=e

//ques) reverse an array after m position
void reverseArray(vector<int> &arr,int m){
    int s = m+1;
    int e = arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}

/* Merge sorted arrays*/

void mergeArray(int arr1[],int n, int arr2[],int m,int arr3[]){
    int i=0,j=0;
    while(i<)
}