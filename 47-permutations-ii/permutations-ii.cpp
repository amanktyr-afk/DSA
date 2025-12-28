class Solution {
public:
   void permutation(vector<vector<int>>&ans,vector<int>&nums,int index)
   {
    if(index==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    vector<bool>use(21,0);
    for(int i=index;i<nums.size();i++)
    {
       if(use[nums[i]+10]==0)
       {
        swap(nums[i],nums[index]);
        permutation(ans,nums,index+1);
        swap(nums[i],nums[index]);
        use[10+nums[i]]=1;
       }
    }
   }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {  int index=0;
       vector<vector<int>> ans;
       permutation(ans,nums,index);
       return ans; 
    }
};