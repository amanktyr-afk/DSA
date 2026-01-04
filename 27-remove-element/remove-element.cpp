class Solution {
public:
    int removeElement(vector<int>& nums, int val)
     {
        int n=nums.size();
        int first=0,sec=1,count=0;
        while(sec<n)
        {
            if(nums[first]==val)
            {
                while(nums[sec]==val&&sec<n-1)
                sec++;
                swap(nums[first],nums[sec]);
            }
                    first++;sec++;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            count++;
        }
        return count;
     }
};