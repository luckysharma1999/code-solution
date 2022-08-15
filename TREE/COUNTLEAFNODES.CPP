//COUNT LEAF NODES
//USE ANY TRAVERSAL METHOD TO TRAVERSE THRPUG TREE
//I'm USING INORDER METHOD
//LNR WHERE WE USE TO PRINT THE NODE JUST CHECK THE CONDITION FOR LEAF NODE
void inOrder(BinaryTreeNode<int> *root, int &count){
    if(root == NULL){
        return;
    }
    
    inOrder(root->left,count);
    
    //CONDITION FOR LEAF NODE
    if(root->left ==NULL && root->right == NULL){
        count++;
    }
    inOrder(root->right,count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count = 0;
    inOrder(root,count);
    return count;
    
}