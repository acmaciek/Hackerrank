void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    while(head != NULL) {
        cout << head -> data<<endl;
        head = head -> next;
    }
}


