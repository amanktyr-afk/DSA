class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int j=1;
       int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]!=arr[i])
            {
                arr[j]=arr[i];
                j++;
            }
        }
        arr.resize(j);
        return arr;
    }
};