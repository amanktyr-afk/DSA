/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) 
    {
      Node* start=head,*end=head;
      int len=0,initial=0;
      while(end)
     {
         end=end->next;
         len++;
     }
     if(len-n>0)
     initial=len-n;
     while(initial>0)
     {
         start=start->next;
         initial--;
     }
     
     int sum=0;
     while(start)
     {
         sum+=start->data;
         start=start->next;
     }
     return sum;
    }
};