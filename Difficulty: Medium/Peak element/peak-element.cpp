class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        int start=0,last=n-1;
        while(start<=last)
        {
           int mid=start+(last-start)/2;
           if(n==1)
           return 0;
           if(mid==0&&arr[mid]>arr[mid+1])
            return 0;
           if(mid==n-1&&arr[mid]>arr[mid-1])
           return n-1;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
            return mid;
            else if(arr[mid+1]>arr[mid])
            start=mid+1;
            else
            last=mid-1;
        }
        return -1;
    }
};