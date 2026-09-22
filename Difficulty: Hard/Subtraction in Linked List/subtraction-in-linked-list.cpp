
class Solution {
  public:
    Node* rev(Node*head)
    {   
        if(head==NULL  || head->next==NULL)
        return head;
        Node*prev=NULL,*curr=head;
        Node*nn=NULL;
        while(curr)
        {   
            nn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nn;
        }
        return prev;
    }
     int length(Node*head)
     {
        int n=0;
        while(head)
        {
            n++;
            head=head->next;
        }
        return n;
     }
     Node*larger(Node*head1,Node*head2)
     {
         int n1=length(head1);
         int n2=length(head2);
         if(n1>n2)
         return head1;
         if(n2>n1)
         return head2;
         // if equal length LL then selecting larger no. list
         Node*p1=head1,*p2=head2;
         while(p1&&p2)
         {
             if(p1->data > p2->data)
             return head1;
             if(p2->data > p1->data)
             return head2;
             p1=p1->next;
             p2=p2->next;
         }
         //if equal return any
         return head1;
     }
     Node* subLinkedList(Node*head1,Node*head2)
     {
         Node*big=larger(head1,head2);
         Node*small=NULL;
         if(big==head1)
         small=head2;
         else
         small=head1;
        //rev both lL
         big=rev(big);
         small=rev(small);
         Node*dummy=new Node(444);
         Node*temp=dummy;
         int borrow=0;
         while(big)
         {
             int x=big->data-borrow;
             int y=small ? small->data : 0;
             if(x<y)
             {
                 x+=10;
                 borrow=1;
             }
             else
            {
                borrow=0;
            }
             temp->next=new Node(x-y);
             temp=temp->next;
             big=big->next;
             if(small)
             small=small->next;
         }
         Node*ans=rev(dummy->next);
         //remove leading zeros  
         while(ans && ans->data==0 && ans->next)// ans->next becz if 0000 then we have to return atlest 0
          {
              Node*t=ans;
              ans=ans->next;
              delete t;
          }
          delete dummy;
          return ans;
    }
};