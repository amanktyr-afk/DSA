class Solution {
  public:
    int findFloor(vector<int>& arr, int x)
    {
       int n=arr.size();
       int start=0,end=n-1,floor=-1;
       while(start<=end)
       {  
           int mid=start+(end-start)/2;
           if(arr[mid]<=x)
           {
               floor=mid;
               start=mid+1;
           }
           else 
           end=mid-1;
       }
       return floor;
    }
};
