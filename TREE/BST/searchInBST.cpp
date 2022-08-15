
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        //agar data mil gaya to
        return true;
    }
    if(root->data >x){
        //left part me search kro
        return searchInBST(root->left,x);
    }else{
        //right part me search kro
        return searchInBST(root->right,x);
    }
    // agar code ke end tak data nhi mila to return FALSE
    return false;
    
}
//T.C. O(H) 
//S.C. O(N)


//Iterative method 
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> * temp = root;
     while(temp!=NULL){
        if(temp->data == x){
            return true;
        }
        if(temp->data > x){
            temp = temp->left;
        }else{
            temp = temp->right;
        }

     }
     return false;
}

//T.C. O(H) 
//S.C. O(1)