// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) 
    {
      int n=mat.size();
      int m=mat[0].size();
      for(int i=0; i<n; i++)
      {
         if(x>=mat[i][0] && x<=mat[i][m-1])
         {
             for(int j=0; j<m; j++)
             {
                 if(mat[i][j]==x)
                 return 1;
             }
         }
      }
      return 0;
    }
};