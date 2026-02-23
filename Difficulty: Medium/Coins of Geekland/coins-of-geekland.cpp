class Solution {

  public:
    int Maximum_Sum(vector<vector<int>> &mat, int n, int k) 
    {
      vector<vector<int>>presum(n,vector<int>(n,0));
      // prefix sum of 2-d array
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
             presum[i][j]=mat[i][j];
             if(i>0)
             {
                 presum[i][j]+=presum[i-1][j];
             }
             if(j>0)
             {
                presum[i][j]+=presum[i][j-1]; 
             }
             if(i>0&&j>0)
             {
               presum[i][j]-=presum[i-1][j-1];
             }
          }
      }
      // fecthing every kxk matrix sum
      int ans=INT_MIN;
      for(int i=k-1;i<n;i++)
      {
          for(int j=k-1;j<n;j++)
          { 
             int sum=presum[i][j];
              
             if(i>=k)
             {
               sum-=presum[i-k][j];
             }
             if(j>=k)
             {
                 sum-=presum[i][j-k];
             }
             if(i>=k&&j>=k)
             {
                sum+=presum[i-k][j-k];
             }
             ans=max(sum,ans);
          }
      }
      return ans;
    }
};