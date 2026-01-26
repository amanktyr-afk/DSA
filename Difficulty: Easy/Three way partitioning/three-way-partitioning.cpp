class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    // Dutch National Flag Algo
    void threeWayPartition(vector<int>& arr, int a, int b)
    {
      int n=arr.size(),lta=0,gtb=0;
      int first=0,last=n-1,i=0;
      while(i<=last)  // updating last so that ele fixed at last couldn't move
      {
          if(arr[i]<a)
          swap(arr[i++],arr[first++]);
          else if(arr[i]>b)
          swap(arr[i],arr[last--]);
          else
          i++;
      }
    }
};