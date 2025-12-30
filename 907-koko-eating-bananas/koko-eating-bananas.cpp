class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {    int n=piles.size(),i=0,ans=0; 

       int start=1,end=0;  //start(eating speed) never be 0
        for(i=0;i<n;i++)
         end=max(end,piles[i]);
        while(start<=end)
        {
            int mid=(start+end)/2;
            long long tc=0;
            for(i=0;i<n;i++)
            {   int c=0;
               if(piles[i]%mid==0)
                c=piles[i]/mid;
                else
                c=piles[i]/mid+1;
                tc+=c;
            }
             if(tc<=h)
           {  
            ans=mid;
            end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;  
    }
};