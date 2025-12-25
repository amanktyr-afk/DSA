class Solution {
  public:
 /*  void selection_sort(vector<int>&arr,int n)
   {
       for(int i=0;i<=n-2;i++)
       {
           int min=i;
          for(int j=i+1;j<n;j++)
          {
              if(arr[j]<arr[min])
                min=j;
          }
          swap(arr[i],arr[min]);
       }
   }*/
    bool hasTripletSum(vector<int> &arr, int target)
    {
        int n=arr.size();
       // selection_sort(arr,n);
        // two pointer approach
        // searching target-arr[i] 
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {    
           int ans=target-arr[i];
          int start=i+1,end=n-1;
            while(start<end)
            {
            if(arr[start]+arr[end]==ans)
            return 1;
            else if(arr[start]+arr[end]<ans)
             start=start+1;
            else
             end=end-1;
            }
        }
        return 0;
    }
};