class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k)
    { 
         sort(stalls.begin(),stalls.end());
        int n=stalls.size(),ans=0;
       int start=1,end=stalls[n-1]-stalls[0];
       while(start<=end)
       { 
           int cow=1,pos=stalls[0];
          int mid=start+(end-start)/2;
           for(int i=1;i<n;i++)
           {
               if(pos+mid<=stalls[i])
             {
                 pos=stalls[i];
                 cow++;
             }
             
           }
           if(cow>=k)
           {   
               ans=mid;
               start=mid+1;
           }
           else
           end=mid-1;
       }
       return ans;
    }
};