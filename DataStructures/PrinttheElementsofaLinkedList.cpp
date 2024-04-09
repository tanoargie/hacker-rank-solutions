/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
    if (head == NULL) {
        cout << "";
    } else {
        Node* it = head;
        while (it != NULL) {
            cout << it->data << endl;
            it = it->next;
        }
    }
  // You only need to complete this method. 
}

