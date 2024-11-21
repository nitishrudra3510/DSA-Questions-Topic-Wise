
Node* insertAtPositon(Node* head, int position, int data1) {
    Node* new_node = new Node(data1);
    if(head== nullptr || position == 1){
        new_node->next = head;
        return new_node;
    }
    Node* temp = head;
    for(int i=1; i<position-1 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp==nullptr){
        cout<<"Position has out of bounds. insertion not performed."<<endl;
        delete new_node; // free the allocated memory, for new_node
        return head; // return the origin head;
    }
    new_node->next = temp->next;
    temp->next = new_node;

    return head;
}
