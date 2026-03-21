class Solution {
  public:
    string caseSort(string& s)
    { 
      string templ,tempu;
      int n=s.size();
      vector<int>upper(26,0);
      vector<int>lower(26,0);
      for(int i=0;i<n;i++)
      { 
        if(s[i]>='A' && s[i]<='Z')
        {
          upper[s[i]-'A']++;
          s[i]='#';
        }
      }
      for(int i=0;i<n;i++)
      {
        if(s[i]>='a' && s[i]<='z')
        {
          lower[s[i]-'a']++;
          s[i]='@';
        }
      }
      for(int i=0;i<26;i++)
      {
        while(upper[i])
        {
            tempu+=char(i+'A');
            upper[i]--;
        }
      }
      for(int i=0;i<26;i++)
      {
        while(lower[i])
        {
            templ+=char(i+'a');
            lower[i]--;
        }
      }
      int j=0,k=0;
      for( int i=0;i<n;i++)
      {
          if(s[i]=='#')
          s[i]=tempu[j++];
          else
          s[i]=templ[k++];
      }
      return s;
    }
};