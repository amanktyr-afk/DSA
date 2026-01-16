class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target)
    {
      int n=arr.size();
      int first=0,sec=0;
      while(sec<n)
      { 
          target-=arr[sec];
         while(first<=sec&&target<0)
         {
             target+=arr[first];
             first++;
         }
         if(target==0)
         {
             return {first+1,sec+1};
         }
         sec++; 
         
      }
      return {-1};
    }
};