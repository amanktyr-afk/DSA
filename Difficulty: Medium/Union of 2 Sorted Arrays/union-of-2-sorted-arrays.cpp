class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
    {
      int as=a.size();
      int bs=b.size();
      vector<int>ans;
      int first=0,sec=0;
      while(first<as&&sec<bs)
      {
         if(a[first]>b[sec])
         {
            ans.push_back(b[sec++]);
         }
         else if(a[first]==b[sec])
         {
             ans.push_back(b[sec]);
             first++;sec++;
         }
         else 
         {
             ans.push_back(a[first++]);
         }
      }
      while(first<as)
      ans.push_back(a[first++]);
      while(sec<bs)
      ans.push_back(b[sec++]);
      int n=ans.size();
      int j=1;
      for(int i=1;i<n;i++)
      {
          if(ans[i-1]!=ans[i])
          {
              ans[j]=ans[i];
              j++;
          }
      }
      ans.resize(j);
      return ans;
      
    }
};