// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) 
    {
      string ans="";
      int total=0,carry=0,i=0;
      int n1=s1.size(),n2=s2.size();
       reverse(s1.begin(),s1.end());
       reverse(s2.begin(),s2.end());
      for(i=0;i<min(n1,n2);i++)                                                                                                                                     
      {
         int sum = s1[i]-'0'+s2[i]-'0'+carry;
             ans=char(sum%10+'0')+ans;
             carry=sum/10;
      }
      for(;i<n1;i++)
      {
           int sum = (s1[i]-'0')+carry;
             ans=char(sum%10+'0')+ans;
             carry=sum/10;
      }
       for(;i<n2;i++)
      {
           int sum = (s2[i]-'0')+carry;
             ans=char(sum%10+'0')+ans;
             carry=sum/10;
      }
      while(carry)
      {
          ans=char(carry%10+'0')+ans;
          carry/=10;
      }
      //leading 0's deleting 000015-->15
      int j=0;
      while( j<ans.size()-1 && ans[j]=='0')
        j++;
      return  ans.substr(j);
    }
};