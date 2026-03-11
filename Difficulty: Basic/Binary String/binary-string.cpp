class Solution {
  public:
    int binarySubstring(string& s) 
    {  
       int n=s.size(),ones=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='1')
          ones++;
      }
      int substrings=ones*(ones+1)/2-ones;
      return substrings;
    }
};