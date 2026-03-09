class Solution {
  public:
    int maxCircularSum(vector<int> &arr) 
    {  
      int n=arr.size();
      int max_sub=INT_MIN;
      int prefix1=0,total=0;
      for(int i=0;i<n;i++)
      { 
          total+=arr[i];
         prefix1+=arr[i];
         max_sub=max(prefix1,max_sub);
         if(prefix1<0)
         prefix1=0;
       }
      int min_sub=INT_MAX;
      int prefix2=0;
      for(int i=0;i<n;i++)
      {
          prefix2+=arr[i];
          min_sub=min(prefix2,min_sub);
          if(prefix2>0)
          prefix2=0;
      }
      if(max_sub<0)
      return max_sub;
      return max(max_sub,total-min_sub);
    }
};