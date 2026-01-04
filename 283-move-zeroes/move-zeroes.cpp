class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int first=0,sec=1;
        while(sec<n)
        {
            if(nums[first]==0&&nums[sec]!=0)
            {
                swap(nums[first],nums[sec]);
                first++;sec++;
            }
            else if(nums[first]==0&&nums[sec]==0)
            sec++;
            else
             {first++;sec++;}
        }
    }
};