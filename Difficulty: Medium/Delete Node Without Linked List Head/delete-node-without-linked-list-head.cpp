
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
  // overwriting next node into curr and del next node ,it is just overwriting into curr node
    void deleteNode(Node* del_node)
    {
        Node*temp=del_node->next;
        del_node->data=temp->data;
        del_node->next=temp->next;
        delete temp;
    }
};