/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) 
    {
      Node*start=head;
      vector<int> ans;
      while(start!=NULL)
      {
         ans.push_back(start->data); 
         start=start->next;
      }
      return ans;
    }
};