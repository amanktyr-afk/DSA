class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr)
    {
      int n=arr.size();
      int start=0,end=n-1;
      int first=-1,last=-1;
      while(start<=end)
      {
         int mid=start+(end-start)/2;
         if(arr[mid]==x)
         {
             first=mid;
             end=mid-1;
         }
         else if(arr[mid]>x)
          end=mid-1;
         else if(arr[mid]<x)
          start=mid+1;
      }
       start=0,end=n-1;
       while(start<=end)
      {
         int mid=start+(end-start)/2;
         if(arr[mid]==x)
         {
             last=mid;
             start=mid+1;
         }
         else if(arr[mid]>x)
          end=mid-1;
         else if(arr[mid]<x)
          start=mid+1;
      }
       if(first==-1 && last==-1)
    return {-1};
    else
    return {first,last};
    }
};