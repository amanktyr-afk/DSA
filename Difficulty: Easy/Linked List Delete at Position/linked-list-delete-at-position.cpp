
/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node*cur, int x)
    {
      if(x==1)
      {
          Node*temp=cur->next;
          delete cur;
          return temp;
      }
      cur->next=deleteNode(cur->next,x-1);
      return cur;

    }
};