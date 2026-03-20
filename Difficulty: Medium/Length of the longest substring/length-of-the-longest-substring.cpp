class Solution {
  public:
    int longestUniqueSubstring(string &s)
    {
        int n=s.size();
        int first=0,sec=0,len=0;
        vector<bool>visit(256,0);
        while(sec<n)
        {
            while(visit[s[sec]])
            {
               visit[s[first]]=0;
                first++;
            }
            visit[s[sec]]=1;
            len=max(len,sec-first+1);
            sec++;
        }
        return len;
    }
};