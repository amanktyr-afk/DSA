class Solution {
  public:
  // either 1010... or 0101... pattern will form 
    int minFlips(string& s) 
    {
       int n=s.size();
       int count1=0,count2=0;
       for(int i=0;i<n;i++)
       {
           //pattern 010101....
           if(s[i]!=(i%2==0 ? '0':'1'))
           count1++;
          // pattern 101010....
           if(s[i]!=(i%2==0 ? '1':'0'))
           count2++;
       }
       return min(count1,count2);
    }
};
