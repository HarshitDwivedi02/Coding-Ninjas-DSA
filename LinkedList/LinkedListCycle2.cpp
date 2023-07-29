Node *firstNode(Node *head)

{

Node* fast = head;

Node* slow = head;

Node*dummy = head;

 

while(fast != NULL && fast->next != NULL){

slow = slow ->next;

fast = fast-> next -> next;

if(slow == fast){

while(slow != dummy){

slow = slow -> next;

dummy = dummy->next;

}

return dummy;

}

}

return NULL;

}