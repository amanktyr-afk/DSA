class Solution {
  public:
    void relativeSort(vector<int>& a1, vector<int>& a2)
    {
      int n1=a1.size();
      int n2=a2.size();
      unordered_map<int,int> freq;
      for(auto x : a1)
      {
          freq[x]++;
      } 
      int idx=0;
      for(int x: a2)
      {
          while(freq[x]>0)
         {
             a1[idx++]=x;
             freq[x]--;
         }
      }
      vector<int> v;
      for(auto it: freq)
      {
          while(it.second>0)
          {
              v.push_back(it.first);
              it.second--;
          }
      }
       sort(v.begin(),v.end());
       for(auto x: v)
       {
           a1[idx++]=x;
       }
    }
};