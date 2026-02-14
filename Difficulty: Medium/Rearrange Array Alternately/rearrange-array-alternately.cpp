class Solution {
  public:
    void rearrange(vector<int>& arr) 
    {
      sort(arr.begin(),arr.end());
      int n=arr.size();
      int min=0,max=n-1;
      int maxele=arr[n-1]+1;
      for(int i=0;i<n;i++)
      {
        if(i%2==0)
        {
            arr[i]+=(arr[max]%maxele)*maxele;
            max--;
        }
        else
        {
           arr[i]+=(arr[min]%maxele)*maxele;
            min++; 
        }
      }
      for(int i=0;i<n;i++)
      {
          arr[i]/=maxele;
      }
    }
};