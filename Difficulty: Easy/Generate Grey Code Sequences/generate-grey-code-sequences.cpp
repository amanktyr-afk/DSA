/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution {
  public:
    vector<string> generateCode(int N)
    {
      vector<string>ans;
      for(int i=0;i<(1<<N);i++)
      {
         int gray=i^(i>>1);
         string s="";
         for(int j=0;j<N;j++)
         {
            if(gray & (1<<j))
            s='1'+s;
            else
            s='0'+s;
         }
         ans.push_back(s);
      }
      return ans;
    }
};

