// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int>& arr)
    {
        // Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count =0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=arr[i-1])
            {
               int prev=arr[i];
                arr[i]=arr[i-1]+1;
                count+=arr[i]-prev;
            }
        }
        return count;
    }
};