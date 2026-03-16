class Solution {
public:
    int lengthOfLastWord(string s)
    {
      int n=s.size();
      int first=0,last=n-1; 
      while(first<last)
      swap(s[first++],s[last--]);
      int i=0,j=0;
      while(s[i]==' ')
      i++;
      j=i;
      while(j<n&&s[j]!=' ')
      j++;
      return j-i;
    }
};