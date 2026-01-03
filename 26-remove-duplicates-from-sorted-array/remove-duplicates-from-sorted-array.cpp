class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n=nums.size();
        int start=0,end=1,k=0,pos=1;
        while(end<n)
        {
            if(nums[start]==nums[end])
            end++;
            else
            {
                k++;
                nums[pos]=nums[end];
                start++;pos++;
            }
        }
        return k+1;
    }
};