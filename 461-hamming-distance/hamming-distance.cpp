class Solution {
public:
    int hammingDistance(int x, int y) 
    {
       int count=0;
       int i=32;
       while(i--)
       {
        if((x&1)!=(y&1))  // & has lower priority then !=
        count++;
        x>>=1;y>>=1;
       }
       return count;;
    }
};