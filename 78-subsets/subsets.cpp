class Solution {
public:
   void all_subset(vector<int>&nums,int start,int n,vector<int> &temp,vector<vector<int>> &ans)
   {
    if(start==n)
     {
        ans.push_back(temp);
         return;
     }
     // if element is not taken in set 
     all_subset(nums,start+1,n,temp,ans);
     // if element is taken in set
     temp.push_back(nums[start]);
     all_subset(nums,start+1,n,temp,ans);
     temp.pop_back();
   }
    vector<vector<int>> subsets(vector<int>& nums)
    {
       vector<int> temp;
       vector<vector<int>> ans;
      int start=0;
      int n=nums.size();
       all_subset(nums,start,n,temp,ans);
        return ans;
    }
};