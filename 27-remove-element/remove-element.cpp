class Solution {
public:
//  O(n) approach
    int removeElement(vector<int>& nums, int val)
     {   
        int n=nums.size();
        int first=0,last=n-1,count=0,i=0;
        while(first<last)
        {
          if(n==0)
          return 0;
          if(nums[first]!=val)
          first++;
          else if(nums[first]==val&&nums[last]==val)
          last--;
          else 
          {
             swap(nums[first],nums[last]);
             first++;last--;  
          }   
        }
        for(int i=0;i<n;i++)
       {
        if(nums[i]!=val)
        count++;
       }
        return count;  
     }
};