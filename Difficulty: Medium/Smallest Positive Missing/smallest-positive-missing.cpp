class Solution {
  public:
    int missingNumber(vector<int> &arr) 
    {
      int n=arr.size();
      for(int i=0;i<n;i++)
      {
         while(arr[i]>0 && arr[i]<=n&& arr[i]!=arr[arr[i]-1])
    //after swapping that arr[i] will again check that is why we r using while
    //Because the inner loop doesn't restart from scratch for every i;
    //every swap permanently places an element in its correct position
    //so the total number of inner-loop executions over the entire array is at most O(n).
    //Therefore the overall complexity is O(n).
         {
            swap(arr[i],arr[arr[i]-1]);
         }
      }
      for(int i=0;i<n;i++)
      {
          if(arr[i]!=i+1)
          return i+1;
      }
      return n+1;;
    }
};