int binarySearch(vector<int>& arr,int s,int e, int key){
    int start = s;
    int end = e;
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
int getPivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    
    return s;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int p = getPivot(arr,n);
    if(k>=arr[p] && k<=arr[n-1]){
        //on second line(here line refers to the grap line is array elements are depicted on on x-y graph )
        return binarySearch(arr,p,n-1,k);
    }else{
        //on first line
        return binarySearch(arr,0,p-1,k);
    }
    
} 
//Complexity O(logn )



// alternate method
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int findPosition(vector<int>& arr, int n , int key){
        int s= 0;
        int e = n-1;

        int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid]== key){
                return mid;
            }
            if(arr[mid]>=arr[s]){
                if(key>arr[mid] || key <arr[s]){
                    s = mid +1;
                }else{
                    e = mid -1;
                }
            }else{
                if(key<arr[mid] || key >arr[e]){
                    e = mid -1;
                }else{
                    s = mid+1;
                }


            }
            mid = s + (e-s)/2;
        }
        return -1;
}

int main() {
    // Write C++ code here
   cout << "Hello world!"<<endl;
   vector<int> arr{7,8,9,0,1,2,3};
   int k;
   cin>>k;
   cout<<"Position of target element"<<findPosition(arr,7,k)<<endl;
    

    return 0;
}

