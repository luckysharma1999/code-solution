pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key){   
    BinaryTreeNode<int>* temp = root;
    int pred = -1;
    int succ = -1;

    while(temp->data != key){
        if(temp->data > key){
            succ= temp->data; // yaha p value isliye store kr rhe h kyuki agar right subtree null hua to value yhi hogi
            temp=temp->left;
        }else{
            pred=temp->data;// yaha p value isliye store kr rhe h kyuki agar left subtree null hua to value yhi hogi
            temp=temp->right;
        }
    }

    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree!=NULL){
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree!=NULL){
        succ = rightTree->data;
        rightTree = rightTree->left;
    }
    return {pred,succ};
}
