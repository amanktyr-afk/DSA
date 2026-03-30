//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A)
    {
      int r=A.size(),count=0;
      for(int i=0;i<r*r-1;i++)
      {
          if(A[i/r][i%r]==0)
          count++;
      }
      return count;
    }
};