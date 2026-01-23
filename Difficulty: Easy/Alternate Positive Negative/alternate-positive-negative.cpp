// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr)
    {
      vector<int>pos,neg;
      for(int x: arr) // take one by one eleof container in x
      {
          if(x>=0)
          pos.push_back(x);
          else
          neg.push_back(x);
      }
      int p=0,n=0,i=0;
      while(p<pos.size()&&n<neg.size())
      {
          arr[i++]=pos[p++];
          arr[i++]=neg[n++];
      }
      //remaining ele
      while(p<pos.size())
       arr[i++]=pos[p++];
       
       while(n<neg.size())
       arr[i++]=neg[n++];
    }
};