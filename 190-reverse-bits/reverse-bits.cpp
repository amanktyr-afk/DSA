class Solution {
public:
    int reverseBits(int n) 
    {
      int i=32;int ans=0;
      while(i--)
      {
        int last_bit=n&1;
        ans=(ans<<1) | last_bit;       //exactly same as ans=ans*10+reminder;
        n=n>>1;                // same as n=n/10; here last bit out
      }
      return ans;
    }
};