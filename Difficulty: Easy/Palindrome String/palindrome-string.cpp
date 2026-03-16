class Solution {
  public:
    bool isPalindrome(string& s) 
    {
       int n=s.size();
       int first=0,last=n-1;
       while(first<last)
       {
           if(s[first++]!=s[last--])
           return 0;
       }
       return 1;
    }
};