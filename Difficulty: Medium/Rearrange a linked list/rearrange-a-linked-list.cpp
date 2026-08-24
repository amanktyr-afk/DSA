/* Node Structure
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) 
    { 
      Node*odd=head,*even=head->next;
      Node*even_head=even;
      while(even && even->next)
      {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
      }
      odd->next=even_head;
    }
};