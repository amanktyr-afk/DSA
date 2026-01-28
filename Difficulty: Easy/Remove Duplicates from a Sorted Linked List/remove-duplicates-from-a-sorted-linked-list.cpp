/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    // soln with extra space
    Node* removeDuplicates(Node* head)
    {
        vector<int>v;
        Node* curr=head;
        v.push_back(curr->data);// 1st ele pushed
        curr=curr->next;   // points sec node 
        while(curr)     
        {  
           if(v[v.size()-1]!=curr->data)
            v.push_back(curr->data);
            curr=curr->next;
        }
        curr=head;
        Node*prev=NULL;
        int index=0;
        while(index<v.size())
        {   
            curr->data=v[index];
            index++;
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        return head;
    }

};