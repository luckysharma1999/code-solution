/*
Terminologies:

node                                                                
root
children
parent
siblings -> whose parents are same
ancestor
descendent
leaf -> which has no child
*/


void inOrder(node* root){
    //inorder means LNR 
    // in means print beech m krna h left or right ki call me
    if(root == NULL){
        return;
    }

    inorder(root->left); // L

    cout<<root->data<<" "; // N

    inorder(root->right); // R
    
}

void preOrder(node* root){
    //  LRN 
    //pre means print  left or right ki call ke phle krna h 
    if(root == NULL){
        return;

    }
    cout<<root->data<<" ";//N

    preOrder(root->left); //L

    preOrder(root->right);//R

    


}

void postOrder(node* root){
    //  LRN 
    //post means print  left or right ki call ke bad krna h 
    if(root == NULL){
        return;

    }

    postOrder(root->left); //L

    postOrder(root->right);//R

    cout<<root->data<<" ";//N


}

