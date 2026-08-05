class Solution {
public:
    int numFriendRequests(vector<int>& ages)
    {
        int n=ages.size();
        sort(ages.begin(),ages.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {   
            // iterator left points first ele greter than ages[i]*0.5+7
            auto left=upper_bound(ages.begin(),ages.end(),ages[i]*0.5+7)-ages.begin();
            // iterator right points first ele greter or equal to ages[i]
            auto right=upper_bound(ages.begin(),ages.end(),ages[i])-ages.begin();
           int temp= right-left-1;// -1 for self removing of ages[i]
           if(temp>0)
            ans+=temp;
        } 
        return ans;
    }
};