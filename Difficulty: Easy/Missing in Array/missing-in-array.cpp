class Solution {
  public:
    int missingNum(vector<int>& arr)
    {
      long long n=arr.size()+1;
      long long sum_of_n_num=0;
      sum_of_n_num=n*(n+1)/2;
      int sum_of_array=0;
      for(int i=0;i<n-1;i++)
      {
          sum_of_array+=arr[i];
      }
      return (sum_of_n_num-sum_of_array);
      
    }
};