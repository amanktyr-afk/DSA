class Solution {
public:
   void all_parenthesis(int left,int right ,int n,string &temp,vector<string>&ans)
   {
    if(left+right==2*n)
    {
      ans.push_back(temp);
      return ;
    }
      if(left<n)
      {
        temp.push_back('(');
        all_parenthesis(left+1,right,n,temp,ans);
        temp.pop_back();
      }
      if(right<left)          // right parenthesis never be > left parenthesis 
      {
        temp.push_back(')');
        all_parenthesis(left,right+1,n,temp,ans);
        temp.pop_back();
      }
    }
    vector<string> generateParenthesis(int n) 
    {
      string temp;
      vector<string>ans;
      all_parenthesis(0,0,n,temp,ans);
       return ans;
    }
};