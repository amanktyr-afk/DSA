/* Linked List Node Structure
class Node{
public:
    int data;
    Node *next;
    Node(int num){
        data = num;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    bool isprime(int n)
    {   
        if(n<2)
        return 0;
        for(int i=2;i<=sqrt(n);i++)//for(int i=2; i*i<=n ;i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }
    int nearprime(int n)
    {
        if(n<=2)
        return 2;
        for(int d=0; ;d++)
        {
            if(n-d>=2 && isprime(n-d))
            return n-d;
            if(isprime(n+d))
            return n+d;
        } 
    }
    Node *primeList(Node *head)
    { 
      if(head==NULL)
       return head;
      Node* h1=head;
      while(h1)
      {
          h1->data=nearprime(h1->data);
          h1=h1->next;
      }
      return head;
    }
};