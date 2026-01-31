/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) 
    {
      Node*slow=head;
      Node*fast=head;
      while(fast&&fast->next)
      {
          slow=slow->next;
          fast=fast->next->next;
          if(fast==slow)
          break;
      }
      //if  no loop present 
      if(fast==nullptr||fast->next==nullptr)
      return;
     // if condn not meet means there is loop
      slow=head;
      while(slow!=fast)
      {
          slow=slow->next;
          fast=fast->next;
      }
      while(slow->next!=fast)
      {
          slow=slow->next;
      }
      slow->next=nullptr;
      
    }
};