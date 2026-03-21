// User function template for C++

class Solution {
  public:
    string ExcelColumn(int N)
    { 
      string ans="";
      while(N)
      {
         N--;
         ans=char(N%26+'A')+ans;
         N/=26;
      }
      return ans;
    }
};