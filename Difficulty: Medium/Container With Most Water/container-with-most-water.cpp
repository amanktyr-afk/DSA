class Solution {
  public:
    int maxWater(vector<int> &arr)
    {
      int n=arr.size();
      int left=0,right=n-1,mostwater=0;
      while(left<right)
      {
          int width=right-left;
          int h=min(arr[left],arr[right]);
          int area=width*h;
           mostwater=max(mostwater,area);
           if(arr[left]<arr[right])
           left++;
           else
           right--;
      }
      return mostwater;
    }
};