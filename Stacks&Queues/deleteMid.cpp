void toDelete(stack<int>&inputStack,int count, int N){
    // base case to check if we are on middle element or not
    if(count == N/2){
        inputStack.pop();
        return;
    }
    
    //storing and delteing the top value at each recursive call till mid is found
    int temp = inputStack.top();
    inputStack.pop();
    
    //recursive call
    toDelete(inputStack, count+1, N);

    //adding deleted element after each recursive call
    inputStack.push(temp);
    
}

void deleteMiddle(stack<int>&inputStack, int N){
	
    //using recursive approach
    int count = 0;
    toDelete(inputStack, count, N);
    
   
}