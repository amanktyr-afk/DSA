class Solution {
public:
    void mergelist(vector<int>&nums,int start,int mid,int end)
    {
        vector<int>arr(end-start+1);
        int first=start,second=mid+1,i=0;
        while(first<=mid&&second<=end)
        {
            if(nums[first]<=nums[second])
            {
                arr[i]=nums[first];
                i++;first++;
            }
            else
            {
                arr[i]=nums[second];
                i++;second++;
            }
        }
        while(first<=mid)
        {
            arr[i]=nums[first];
            i++;first++;
        }
        while(second<=end)
        {
            arr[i]=nums[second];
            i++;second++;
        }
        i=0;
        while(start<=end)
        {
            nums[start]=arr[i];
            start++;i++;
        }
    }
    void mergesort(vector<int>&nums,int start,int end)
    {    if(start==end)
           return ;
       int mid=start+(end-start)/2;
       mergesort(nums,start,mid);//left call
       mergesort(nums,mid+1,end);//right call
       mergelist(nums,start,mid,end);
    }
    vector<int> sortArray(vector<int>& nums)
   {
       int n=nums.size(),start=0,end=n-1;
        mergesort(nums,start,end);
        return nums;
   }
};