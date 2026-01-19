class Solution {
  public:
    int transitionPoint(vector<int>& arr) 
    {  
        int n=arr.size();
       int start=0,end=n-1,ans=-1;
       while(start<=end)
       {
           int mid=start+(end-start)/2;
           if(arr[mid]==0)
            start=mid+1;
           else if(arr[mid]==1)
            {
                ans=mid;
                end=mid-1;
            }
       }
       return ans;
    }
};