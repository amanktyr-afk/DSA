class Solution {
  public:
    void sortIt(vector<int>& arr) 
    {
      int n=arr.size();
      int pos=0;
      for(int i=0; i<n; i++)
      {
        if(arr[i]%2)
        {
          swap(arr[pos],arr[i]);
           pos++;
        }
      }
      sort(arr.begin(),arr.begin()+pos,greater<int>());
      sort(arr.begin()+pos,arr.end());
    }
};