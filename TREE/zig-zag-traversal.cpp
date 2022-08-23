vector <int> zigZagTraversal(Node* root)
{
    vector<int> result;
    if(root==NULL){
        return result;
    }
    queue<Node*> q;
    q.push(root);
    
    bool ltr = true;//direction check initial l to r
    
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        
        //traversing each level
        for(int i =0 ; i< size;i++){
            Node* frontNode = q.front();
            q.pop();
            
            int index= ltr ? i : size-i-1;
            ans[index] = frontNode->data;
            
            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
            
            
        }
        ltr = !ltr;//change direction
        for(auto i : ans){
            result.push_back(i);
        }
        
    }
    return result;
    
}