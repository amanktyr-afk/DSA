class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
     {  
       int n=nums.size();
       vector<int>v(2,0);
       int start=0,end=n-1,first=-1,last=-1,mid=0;
       while(start<=end)
       {
         mid=start+(end-start)/2;
         if(nums[mid]==target)
           {
            first=mid;
            end=mid-1;
           }
         else if(nums[mid]>target)
          end=mid-1;
          else
          start=mid+1;
       }
       v[0]=first;
       start=0,end=n-1;
        while(start<=end)
       {
         mid=start+(end-start)/2;
         if(nums[mid]==target)
           {
            last=mid;
            start=mid+1;
           }
         else if(nums[mid]>target)
          end=mid-1;
          else
          start=mid+1;
       }
       v[1]=last;
       return v;

     }
};