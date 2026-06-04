class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) 
    {
      int n=arr1.size();
      int m=arr2.size();
      vector<int> arr;
      for(int i=0;i<n;i++)
      arr.push_back(arr1[i]);
      for(int i=0;i<m;i++)
      arr.push_back(arr2[i]);
      sort(arr.begin(),arr.end());
      int pos=1;
      for(int i=1;i<(n+m);i++)
      {
         if(arr[i]!=arr[i-1])
         {
             arr[pos]=arr[i];
             pos++;
         }
      }
      arr.resize(pos);
      return arr;
    }
};