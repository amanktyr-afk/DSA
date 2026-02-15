class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) 
    {
       int n=arr.size();
        int maxele=*max_element(arr.begin(),arr.end());
      vector<bool>visited(maxele+1,0);
      for(int i=0;i<n;i++)
        visited[arr[i]]=1;  
      for(int i=1;i<=maxele;i++)
      {
          if(visited[i]==0)
           continue;
           for(int j=1;j<=maxele;j++)
           {
             if(visited[j]==0)
             continue;
             int c=sqrt(i*i+j*j);
             if(c*c!=i*i+j*j||c>maxele)
             continue;
             if(visited[c]==1)
             return 1;
           }
      }
      return 0;
    }
};