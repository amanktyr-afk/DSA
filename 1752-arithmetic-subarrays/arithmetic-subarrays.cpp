class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r)
    {   
        int n=nums.size();
        int m=l.size();
         vector<bool>ans;
        for(int i=0;i<m;i++)
        { 
          int s=abs(l[i]-r[i])+1;
          vector<int>subarray;
          for(int j=l[i];j<=r[i];j++)
          {
            subarray.push_back(nums[j]);
          }
          sort(subarray.begin(),subarray.end());
          int diff=subarray[1]-subarray[0];
          bool ok=1;
          for(int k=1;k<s;k++)
          {
            if(subarray[k]-subarray[k-1]!=diff)
            {
                ok=0;
                break;}
          }
          ans.push_back(ok);
        }
        return ans;
    }
};