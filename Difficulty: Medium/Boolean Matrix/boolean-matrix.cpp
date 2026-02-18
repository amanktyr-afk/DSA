class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat)
    {
      int r=mat.size();
      int c=mat[0].size();
      int firstrow=0,firstcol=0;
      for(int j=0;j<c;j++)
      {
          if(mat[0][j]==1)
          firstrow=1;
      }
      for(int i=0;i<r;i++)
      {
          if(mat[i][0]==1)
          firstcol=1;
      }
      // updating firstrow and firstcolumn(using fr/fc as marker)
      for(int i=1;i<r;i++)
      {
          for(int j=1;j<c;j++)
          {
              if(mat[i][j]==1)
              {
                  mat[0][j]=1;
                  mat[i][0]=1;
              }
          }
      }
      for(int i=1;i<r;i++)
      {
          for(int j=1;j<c;j++)
          {
             if(mat[0][j]||mat[i][0])
             mat[i][j]=1;
          }
      }
// if firstrow /firstcol exist earlier means firstrow's/firstcol's all ele should also be 1 
      if(firstrow)
      {
          for(int j=0;j<c;j++)
          mat[0][j]=1;
      }
      if(firstcol)
      {
          for(int i=0;i<r;i++)
          mat[i][0]=1;
      }
      
    }
};
