/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) 
    {
      Node*start=head;
      if(start==nullptr)
      return 0;
      int count=1;
      while(start->next!=nullptr)
      {
          count++;
          start=start->next;
      }
      return count;
    }
};