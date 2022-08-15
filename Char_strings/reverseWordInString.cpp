// void reverse(vector<char> &s, int start, int end){
//     while(start<=end){
//         swap(s[start++],s[end--])
//     }
// }

// void reverseWord(vector<int> &s,int n){//n is length of vector
//     if(n==0){
//         return;
//     }
//     reverse(s,0,n-1);
//     int left =0;
//     for(int i=0;i<=n;i++){
//         if(s[i]==" " || i == n){
//             reverse(s,left,i-1);
//             left= i+1;
//         }
//     }
// }