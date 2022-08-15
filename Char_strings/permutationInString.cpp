bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])
            return 0;
        

    }
    return 1;
}

//s1 ab
//s2 eidbaoo
bool checkInclusion(string s1, string s2){
    //s1 should be less than s2
    //step1-> make character count array for s1
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index = s1[i]-'a';
        count[index]++;
    }

    //step2- make a window of size equal to s1 to traverse through s2

    int i =0;
    int windowSize=s1.length();
    int count2[26]={0};//this is to keep the count of 2nd string characters occuring in window

    //step3- traverse
    //this below code is for first window only

    while(i<windowSize && i<s2.length){
        //2nd condition is to check if window is > s2
        int index = s2[i]-a;
        count2[index]++;
        i++;
    }

    if(checkEqual(count1,count2)){
        return 1;

    }

    //to make our window move forward
    while(i<s2.length){
        //naya char add krna h or phle wala remove
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index= oldChar - 'a';
        count2[index]--;
        i++;
        if(checkEqual(count1,count2)){
            return 1;
        }

    }
    return 0;
}