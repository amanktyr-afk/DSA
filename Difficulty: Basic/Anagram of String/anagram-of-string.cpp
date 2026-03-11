class Solution {
  public:
    int remAnagram(string &str1, string &str2)
    {  
       int n1=str1.size();
       int n2=str2.size();
       vector<int>s1(26,0);
       vector<int>s2(26,0);
       int count=0;
       for(int i=0;i<n1;i++)
       {
           s1[str1[i]-'a']++;
       }
        for(int i=0;i<n2;i++)
       {
           s2[str2[i]-'a']++;
       }
       for(int i=0;i<26;i++)
       {
           if(s1[i]!=s2[i])
           {
               count+=abs(s1[i]-s2[i]);
           }
       }
       return count;
    }
};
