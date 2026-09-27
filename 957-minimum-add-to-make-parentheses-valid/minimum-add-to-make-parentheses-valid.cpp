class Solution {
public:
// O(1) space soln ,without stack
    int minAddToMakeValid(string s)
    {
      int left=0;
      int right=0;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='(')
        left++;
        else
        {
            if(left==0)
            {
               right++;
            }
            else
            left--;
        }
      }
      return left+right;
    }
};