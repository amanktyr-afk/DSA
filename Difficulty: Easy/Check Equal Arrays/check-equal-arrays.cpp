class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b)
    {
        int n=a.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            return 0;
        }
        return 1;
    }
};