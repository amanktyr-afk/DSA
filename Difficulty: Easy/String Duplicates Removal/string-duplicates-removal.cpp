// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s)
    {
      int n=s.size(),i=0;
      string ans ="";
      vector<bool>visit(256,0);
      while(i<n)
      {
          if(visit[s[i]]==0)
          ans+=s[i];
          
          visit[s[i]]=1;
          i++;
      }
      return ans;
    }
};