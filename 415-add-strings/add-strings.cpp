class Solution {
public:
    string add(string num1,string num2)
    {
        string ans;
        int index1=num1.size()-1,index2=num2.size()-1,carry=0;
        while(index2>=0)
        {
          int sum=(num2[index2]-'0')+(num1[index1]-'0')+carry;
          carry=sum/10;
          char c='0'+sum%10;
          ans+=c;
          index1--;index2--;
        }
        while(index1>=0)
        {
          int sum=(num1[index1]-'0')+carry;
           carry=sum/10;
           char c='0'+sum%10;
           ans+=c;
          index1--;
        }
        if(carry)
        ans=ans+'1';
        //becz we added last digits first
        reverse(ans.begin(),ans.end());
        return ans; 
    }
    string addStrings(string num1, string num2)
   {
      if(num1.size()<num2.size())
      return add(num2,num1);
      else
      return add(num1,num2);  
    }
};