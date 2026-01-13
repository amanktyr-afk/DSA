class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
      int n=matrix.size(),i=0,j=0;// no of rows
      int m=matrix[0].size();    // no of columns
      int start=0,end=m*n-1;
      while(start<=end)
      {
        int mid=start+(end-start)/2;
         i=mid/m;
         j=mid%m;
        if(matrix[i][j]==target)
        return 1;
        else if(matrix[i][j]>target)
        end=mid-1;
        else
        start=mid+1;
      }
      return 0;
    }
};