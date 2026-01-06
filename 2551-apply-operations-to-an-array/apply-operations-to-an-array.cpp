class Solution {
public:
    vector<int> applyOperations(vector<int>& nums)
    {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int first=0,sec=1;
        while(sec<n)
        {
            if(nums[first]!=0)
           {first++;sec++;}
            else if(nums[first]==0&&nums[sec]==0)
            {
                sec++;
            }
            else
            {
                swap(nums[first],nums[sec]);
                first++;sec++;
            }

        }
        return nums;
    }
};