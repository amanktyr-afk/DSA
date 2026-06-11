class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k)
    {
        // code here
        int n=arr.size();
        int maxele=*max_element(arr.begin(),arr.end());
        vector<int>v(maxele+1,0);
        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
        int i=0;
        while(k>0)
        {
            if(k-v[i]>0)
            {
                k=k-v[i];
                i++;
            }
            else
            return i;
        }
        
    }
};