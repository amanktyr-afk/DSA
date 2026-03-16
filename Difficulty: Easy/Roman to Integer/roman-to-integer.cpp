class Solution {
  public:
    int num(char c)
    {
        if(c=='I')
        return 1;
        if(c=='V')
        return 5;
        if(c=='X')
        return 10;
        if(c=='L')
        return 50;
        if(c=='C')
        return 100;
        if(c=='D')
        return 500;
        if(c=='M')
        return 1000;
    }
    int romanToDecimal(string &s)
    {
      int n=s.size();
      int ans=0;
      for(int i=1; i<n; i++)
      {
          if(num(s[i-1])<num(s[i]))
          ans-=num(s[i-1]);
          else
          ans+=num(s[i-1]);
      }
      ans+=num(s[n-1]);
      return ans;
    }
};