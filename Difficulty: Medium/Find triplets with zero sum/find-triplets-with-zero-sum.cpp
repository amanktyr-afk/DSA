class Solution {
  public:
    bool findTriplets(vector<int> &arr)
    {
       int n=arr.size();
       sort(arr.begin(),arr.end());
       for(int i=0;i<n;i++)
       {
           int start=i+1;
           int last=n-1;
           while(start<last)
           {
              int sum=arr[i]+arr[start]+arr[last];
              if(sum==0)
              return 1;
              else if(sum>0)
              {
                  last--;
              }
              else
              start++;
           }
       }
       return 0;
    }
};