 
 //fraz YT code
 void deleteNode(ListNode* node) {
        //Check whether we are at the tail of LL
        if(node-> next ==NULL) delete node;

        //swap the node to be delted with its enxt value
        swap(node->val,node->next->val);

        //assign a temp variable to node's next
        ListNode* temp =node->next;

        // change the value of node next to temp next (i.e node next next)

        node->next = temp->next;
        // delete temp;
    }