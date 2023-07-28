int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    
    Node<int> *temp = head;
    if(temp == NULL){
        return false;
    }
    while(temp != NULL){
        if(temp->data == k){
            return true;     
        }
        temp = temp->next;
        
    }
    return false;
}