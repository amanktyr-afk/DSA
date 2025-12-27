class Solution {
public:
    void permutation(vector<int>&nums,vector<vector<int>>&ans,vector<int>&visited,vector<int>&temp,int index)
    {  
         if(index==visited.size())
       {
         ans.push_back(temp);
         return ;
       }

       for(int i=0;i<visited.size();i++)
       {
         if(visited[i]==0)
         {
            visited[i]=1;
            temp.push_back(nums[i]);
            permutation(nums,ans,visited,temp,index+1);
            visited[i]=0;
            temp.pop_back();
         }   
       }
    }
    vector<vector<int>> permute(vector<int>& nums)
    {   int n=nums.size(),index=0;
       vector<vector<int>> ans;
       vector<int> visited(n,0);
       vector<int> temp;
       permutation(nums,ans,visited,temp,index); 
       return ans; 
    }
};