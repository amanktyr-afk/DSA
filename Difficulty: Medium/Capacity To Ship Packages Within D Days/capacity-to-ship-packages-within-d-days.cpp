// User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int n, int d)
    {   int sum=0,ans=0,start=0,end=0;
        for(int i=0;i<n;i++)
          {
              end=end+arr[i];
              start=max(start,arr[i]);
          }
         while(start<=end)
         {   
            int days=1,c=0;
             int  mid=start+(end-start)/2;
             for(int j=0;j<n;j++)
             {
                 c=c+arr[j];
                 if(c>mid)
                 {
                     days++;
                     c=arr[j];
                 }
             }
              if(days<=d)
             {
                 end=mid-1;
                 ans=mid;
             }
              else
              start=mid+1;
         }
          return ans;
    }
};