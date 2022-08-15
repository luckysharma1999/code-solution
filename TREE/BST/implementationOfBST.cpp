class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
     }
}
Node* insertToBST(Node* root, int data){
        if(root == NULL){
            root = new Node(data);
            return root;
        }

        if(data > root->data){
            //right part
            root->right = insertToBST(root->right,data);
        }else{
            //left part
            root->left = insertToBST(root->left,data);
        }
        return root;
        
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!= -1){
        root = insertToBST(root,data);
        cin>>data;
    }
}
int main(){
    Node* root= NULL;
    cout<<"enter data to create BST";
    takeInput(root);

    return 0;
}