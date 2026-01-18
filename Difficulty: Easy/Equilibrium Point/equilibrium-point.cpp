class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr)
    {
       int n=arr.size(),total=0;
       for(int i=0;i<n;i++)
        total=total+arr[i];
        int prefix=0;
        for(int i=0;i<n-1;i++)
        {
            if(total-prefix-arr[i]!=prefix)
            prefix+=arr[i];
            else 
            return i;
        }
        return -1;
    }
};