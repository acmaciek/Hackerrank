struct Node
  {
     int data;
     struct Node *next;
  }
Node* Insert(Node *head,int data)
{     
  Node* pTemp = new Node;
  Node* pNext = head;
  pTemp -> data = data;
  pTemp -> next = pNext;
  head = pTemp;
  return head;
}


