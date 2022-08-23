void traverseLeft(Node* &root, vector<int> & result){
        if(root == NULL || (root->left == NULL && root->right == NULL))
        {
            return ;
        }
        result.push_back(root->data);
        if(root->left){
            traverseLeft(root->left,result);
        }else{
            traverseLeft(root->right,result);
        }
    }

    void traverseLeaf(Node* &root, vector<int> & result){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            result.push_back(root->data);  
            return;
        }
        traverseLeaf(root->left,result);
        traverseLeaf(root->right,result);
        
    }

    void traverseRight(Node* &root, vector<int> & result){
        if(root == NULL || (root->left == NULL && root->right == NULL)){
            return;
        }   
        if(root->right){
            traverseRight(root->right,result);
        }else{
            traverseRight(root->left,result);
        }
        //pushing in result when returning back from recursion
        result.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> result;
        if(root == NULL){
            return result;
        }
        result.push_back(root->data);
        
        //traverse left part
        traverseLeft(root->left,result);
        //traverse leaf nodes 
        
        //left subtree
        traverseLeaf(root->left,result);
        //right subtree
        traverseLeaf(root->right,result);
        
        //traverse right part
        traverseRight(root->right,result);
        
        return result;
    }