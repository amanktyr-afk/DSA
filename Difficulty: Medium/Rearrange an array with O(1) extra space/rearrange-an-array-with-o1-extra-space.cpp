
class Solution {
  public:
    void arrange(vector<long long>& arr)
    {
      int n=arr.size();
      int maxele=*max_element(arr.begin(),arr.end())+1;
      for(int i=0;i<n;i++)
       arr[i]=arr[arr[i]%maxele]%maxele*maxele+arr[i]%maxele;
       for(int i=0;i<n;i++)
       arr[i]=arr[i]/maxele;
    }
};