class Solution {
  public:
    int numOfSubset(vector<int> &arr)
    {
      sort(arr.begin(),arr.end());
      int count=1;
      int n=arr.size();
      for(int i=1;i<n;i++)
      {
          if(arr[i]!=(arr[i-1]+1))
          count++;
      }
      return count;
      
    }
};