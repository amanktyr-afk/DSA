/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
  
    bool detectLoop(Node* head) 
    {
      Node*temp=head;
      unordered_map<Node*,bool>visited;
      while(temp)
      {
          if(visited[temp]==1)
          return 1;
          visited[temp]=1;
          temp=temp->next;
      }
      return 0;
    }
     
};