class Solution {
public:
    bool canWinNim(int n)
     {
         int x;
         while(n%4!=0)
         {
            x=n%4;
            n=n-x;
            if(n%4==0)
            return 1;
         }  
         return 0;
     }
};