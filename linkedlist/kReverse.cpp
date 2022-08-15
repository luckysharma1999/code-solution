// Reverse the LL in gropu f size k

//eg. 1->2->3->4->5->X
//        k=2
//2->1->4->3->5->X
Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head==NULL){
        return NULL;
    }
    Node* fwd = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count=0;
    
    while(curr != NULL && count < k){
        fwd = curr->next;
        curr->next= prev;
        prev=curr;
        curr= fwd;
        count++;
    }
    
    if(fwd!=NULL){
        head->next=kReverse(fwd,k);
    }
    return prev;
    
}