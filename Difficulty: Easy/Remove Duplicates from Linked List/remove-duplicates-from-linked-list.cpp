/* Structure of linked list Node
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* removeDuplicates(Node* head)
   { 
     if(head==NULL || head->next==NULL)
     return head;
     unordered_map<int,bool> mp;// map may not preserve order of key
     vector<int> unique;       // to remember order using vector 
     Node*curr=head;
     //store unique data 
     while(curr)
     {
         if(mp[curr->data]==0)
         {
           mp[curr->data]=1;
           unique.push_back(curr->data);
         }
         curr=curr->next;
     }
     //putting uniques data into LL 
     curr=head;
     Node*prev=NULL;
     for(auto x: unique)
     {
         curr->data=x;
         prev=curr;
         curr=curr->next;
     }
     //remove extra nodes
     prev->next=NULL;
     return head;
   }
};