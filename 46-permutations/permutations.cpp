class Solution {
public:
   //auxiliary space O(1) solution
    void permutation(vector<int>&nums,vector<vector<int>>&ans,int index)
    {  
      if(index==nums.size())
       {
        ans.push_back(nums);
        return;
       }
       for(int i=index;i<nums.size();i++)
       {
           swap(nums[i],nums[index]);
           permutation(nums,ans,index+1);
           swap(nums[i],nums[index]);
       }
    }   
    vector<vector<int>> permute(vector<int>& nums)
    {   int n=nums.size(), index=0;
       vector<vector<int>> ans;     
       permutation(nums,ans,index); 
       return ans; 
    }
};