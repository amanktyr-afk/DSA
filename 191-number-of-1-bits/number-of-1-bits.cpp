class Solution {
public:
    int hammingWeight(int n) 
    {
        int count=0,i=32;
        while(i--)
        {
            if(n&1)    
            count++;
            n>>=1;
        }
       return count;
        
    }
};