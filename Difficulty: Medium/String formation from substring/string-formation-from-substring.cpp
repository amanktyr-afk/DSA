// User function template for C++
class Solution {
  public:
    void findlps(vector<int>&lps,string s)
    {
        int first=0,sec=1;
        int n=s.size();
        while(sec<n)
        {
            if(s[first]==s[sec])
            {
               lps[sec]=first+1;
               first++;sec++;
            }
            else
            {
                if(first==0)
                {
                  lps[sec]=0; // already 0,we can leave this line 
                  sec++;
                }
                else
                {
                    first=lps[first-1];
                }
            }
        }
        
    }
    int isRepeat(string s)
    {
      vector<int>lps(s.size(),0);
      findlps(lps,s);
      int n=s.size();
      int len=n-lps[n-1];
      if(lps[n-1]>0 && n%len==0)
      return 1;
      else
      return 0;
    }
};