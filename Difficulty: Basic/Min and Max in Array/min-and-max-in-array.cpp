class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size(),maxele=INT_MIN,minele=INT_MAX;
        vector<int>v(2,0);
        for(int i=0;i<n;i++)
        {
            if(maxele<arr[i])
            maxele=arr[i];
            if(minele>arr[i])
            minele=arr[i];
        }
        v[0]=minele;
        v[1]=maxele;
        return v;
    }
};