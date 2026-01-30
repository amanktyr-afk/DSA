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
      Node*curr=head;
      Node*prev=nullptr;
      unordered_map<Node*,bool> visit;
      while(curr)
      {
          if(visit[curr]==1)
          {
              prev->next=nullptr;
              return ;
          }
          visit[curr]=1;
          prev=curr;
          curr=curr->next;
      }
    }
};