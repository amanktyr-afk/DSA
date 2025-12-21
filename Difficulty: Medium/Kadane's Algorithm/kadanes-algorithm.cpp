class Solution {
  public:
    int maxSubarraySum(vector<int> &arr)
    {
        int n=arr.size(),maxsum=INT_MIN;
       int prefix=0;
        for(int i=0;i<n;i++)
        {
           prefix+=arr[i];
           maxsum=max(maxsum,prefix);
           if(prefix<0)
           prefix=0;
        }
        return maxsum;
        
    }
};