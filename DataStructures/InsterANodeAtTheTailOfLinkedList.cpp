Node* Insert(Node *head,int data)
{
    Node *newHeadNode = head; //set NewHeadNode to be new head node
    Node *newNode = new Node(); // dynamically create new Node of type Node
    newNode -> data = data; //assing data value to NewNode
    newNode -> next = NULL; // assign NULL to the next node after NewNode to make sure NewNode is lat node
    
    if(head == NULL) { //if head is not pointing to any node
        head = newNode; //set head node to newNode
        head -> next = NULL; //make sure head is the last node in this linked list
        return head ;
    }
    else {
        while(head -> next != NULL) { //while head is pointing to some node
            
            head = head -> next;//move head to the end of the lined list, untill head -> next is NULL
        }
        head -> next = newNode; // append node at the end of the list 
        return newHeadNode; //return head of the list
    }   
  
}


