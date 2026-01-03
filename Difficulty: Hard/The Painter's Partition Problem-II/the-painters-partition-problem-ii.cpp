class Solution {
  public:
    int minTime(vector<int>& arr, int k) 
    {
       int n=arr.size();
       int start=0,end=0,ans=0;
       for(int i=0;i<n;i++)
       {
           end=end+arr[i];
           start=max(start,arr[i]);
       }
       while(start<=end)
       {
           int mid=start+(end-start)/2;
           int time=0,painter=1;
           for(int i=0;i<n;i++)
           {
              time+=arr[i];
              if(time>mid)
              {
                  painter++;
                  time=arr[i];
              }
           }
           if(painter<=k)
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