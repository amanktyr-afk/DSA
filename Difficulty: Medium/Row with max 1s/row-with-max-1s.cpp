// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
      int n=arr.size();
      int m=arr[0].size();
      int c=0,index=-1;
      for(int i=0;i<n;i++)
      {
          int rowsum=0;
          for(int j=0;j<m;j++)
          {
            rowsum+=arr[i][j];  
          }
          if(rowsum>c)
          { 
              c=rowsum;
              index=i;
          }
      }
        return index;
    }
};