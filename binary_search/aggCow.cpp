#include <bits/stdc++.h>
using namespace std;
const N = 1e5 +10;
 int n, m;
 int position[N];

 bool canPlace(int minDist){
    int lastPos=-1;
    int count = 1;
    for(int i= 0; i<n;i++){
    if(position[i]-lastPos>=minDist){
        count++;
        if(count==m){
            return true;
        }
        lastPos = position[i];  

    }

    }
    return false;
 }

 int main(){
    cin>>n>>m;

    for(int i =0;i<n;i++){
        cin>>position[i]>>endl;
    }
    int lo=0,hi=1e9+10;
    int ans = -1;

    while(lo<=hi){
       int mid=(lo+hi)/2;
        if(canPlace(mid)){
            ans = mid;
            lo = mid+1;
        }else{
            hi=mid-1;
        }
    }
    return ans;
 }