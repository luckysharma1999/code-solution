vector<int> topView(Node *root)
{
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    
    map<int ,int> topNode;
    queue<pair<Node*, int> > q;
    
    q.push({root,0});
    
    while(!q.empty()){
        pair<Node*, int> temp = q.front();
        q.pop();
        
        Node* node = temp.first;
        int hd = temp.second;
        
        if(topNode.find(hd) == topNode.end()){//1 to 1 mapping should be there
            topNode[hd] = node->data;
        }
        if(node->left){
            q.push({node->left,hd-1});
        }
        if(node->right){
            q.push({node->right,hd+1});
        }
        
    }

    for(auto i : topNode){//i represents rows having <int,int>
        ans.push_back(i.second);
    }
    return ans;
    
    
    
}