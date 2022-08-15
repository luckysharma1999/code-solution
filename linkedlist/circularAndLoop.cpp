//brute force
bool isCircular(Node* head){
     if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
    
}


//two pointer APPROACH called floyd cycles algo i.e when slow meets fast at same node
bool isCircular(Node * head) {
    // If head is already NULL, then it is the circular linked list
    // with length zero.
    if (head == NULL) {
        return true;
    }

    // If next pointer of head is already NULL, then it the linear linked
    // list of length 1, hence we return false here.
    if (head -> next == NULL) {
        return false;
    }

    // Initialising slow and fast pointers with head.
    Node * slow = head, * fast = head;

    // Iterating through the linkedlist till, fast doesn't reach end of 
    // linked list or slow pointer will not become equal to fast pointer.
    while (fast != NULL && fast -> next != NULL) {

        // Moving slow pointer by one step.
        slow = slow -> next;
        // Moving fast pointer by two steps.
        fast = fast -> next -> next;

        // Checking if updated slow and fast pointer values are same or not.
        if (slow == fast) {
            break;
        }

    }

    // After completing the traversal, if slow and fast pointers meet and 
    // the node of meeting is node pointed by head, then linkedlist is circular.
    if (slow == fast && slow == head) {
        return true;
    }

    // If linkedlist is not circular, then return false.
    return false;
}


// using MAP

bool detectLoop(Noede* head){
    if(head == NULL)
        return 1;
    
    map<Node*,bool> vis;

    Node* temp = head;
    while(temp!=NULL){
        if(vis[temp]==true){
            return true;
        }

        vis[temp]=true;
        temp = temp->next;
    }
  return false;
}

// remove cycle
