class Solution {
public:
    int hammingDistance(int x, int y) 
    {   int ans=0,i=32,count=0;
        ans= x^y;
       while(i--)
       {
         count+=(ans&1);
         ans>>=1;
       }
       return count;
    }
};