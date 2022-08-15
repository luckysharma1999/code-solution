void deleteNode(int position, Node* & head){
    // if node to be deleted is head node
// here position is the node which you want to delete
if(position ==1){
    Node* temp= head;
    head = head->next;
    delete temp;
}

// if node to be deleted is in the end or middle
else{
    Node* curr = head;
    Node* prev = NULL;
     //make a count variable to keep track of position
    int cnt = 1;
    while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next= curr->next;
    delete curr;

}

}
