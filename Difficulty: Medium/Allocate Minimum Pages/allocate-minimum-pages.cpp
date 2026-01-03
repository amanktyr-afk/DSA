class Solution {
  public:
    int findPages(vector<int> &arr, int k) 
    {
        int n=arr.size(),start=0;
        int end=0,ans=0;
        for(int i=0;i<n;i++)
        {
            end=end+arr[i];
            start=max(start,arr[i]);// max no of pages will be atleast max to array
        }
        if(n<k)
        return -1;
        while(start<=end)
        {   
            int mid=start+(end-start)/2;
            int pages=arr[0],student=1;
            for(int i=1;i<n;i++)
            {
              if(pages+arr[i]<=mid)
                  pages+=arr[i];
              else
              {
                  student++;
                  pages=arr[i];
              }
            }
              if(student<=k)
              {
                  ans=mid;
                 end=mid-1;
              }
              else
              start=mid+1;
        }
        return ans;
    }
};