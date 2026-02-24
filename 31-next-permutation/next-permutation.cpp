class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {  
       int n=nums.size();
       int i=n-1;
       while(i>0)
       {   
          if(nums[i-1]<nums[i])
          { 
            int minele=INT_MAX,index=-1;
            for(int j=i;j<n;j++)
            {
              if(nums[i-1]<nums[j]&&nums[j]<minele)
              {
                minele=nums[j];
                index=j;
              }
            }
            swap(nums[i-1],nums[index]);
            sort(nums.begin()+i,nums.end());
            break;
          }
          i--;
       } 
//edge case when all the permutation end comes at first permutation
       if(i==0)
          {
            sort(nums.begin(),nums.end());
          }
    }
};