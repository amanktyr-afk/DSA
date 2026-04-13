// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) 
    {
      int n=arr.size();
      int start=0,end=n-1;
      int ans=arr[0];
      while(start<=end)
      {
         int mid=end+(start-end)/2;
         if(arr[mid]>=arr[abs(mid-1)%n] && arr[mid]>=arr[(mid+1)%n])
         {
             return arr[mid];
         }
         else if(arr[(mid+1)%n]>arr[mid])
         start=mid+1;
         else
         end=mid-1;
      }
    }
};