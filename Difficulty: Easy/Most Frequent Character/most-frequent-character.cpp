class Solution {
  public:
    char getMaxOccuringChar(string& s)
    {   
        int n=s.size();
       int maxcount=0,maxindex=0;
        vector<int>count(26,0);
        for(int i=0;i<n;i++)
        {
           count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]>maxcount)
            {
                maxcount=count[i];
                maxindex=i;
            }
        }
        return 'a'+maxindex;
        
    }
};