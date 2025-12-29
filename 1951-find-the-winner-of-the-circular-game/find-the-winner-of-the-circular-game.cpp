class Solution {
public:
 int winner(int n,int k,vector<bool>&person,int index,int personleft)
 {   
    if(personleft==1)
    {
        for(int i=0;i<n;i++)
        {
            if(person[i]==0)
            return i;
        }
    }
     int kill=(k-1)%personleft;
     while(kill--)             
     {
        index=(index+1)%n;
         while(person[index]==1)    //skipping killed persons
          index=(index+1)%n;
     }
     person[index]=1;         // killing person
    while(person[index]==1)   // finding next starting point 
    index=(index+1)%n;
    return winner(n,k,person,index,personleft-1);
 }
 int findTheWinner(int n, int k)
    {   int index=0,personleft=n;
       vector<bool>person(500,0);
       return  winner( n, k,person,index,personleft)+1;
    }
};