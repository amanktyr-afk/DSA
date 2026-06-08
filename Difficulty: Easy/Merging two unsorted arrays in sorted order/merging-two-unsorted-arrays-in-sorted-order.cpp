// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) 
    {
      int n=arr1.size();
      int m=arr2.size();
      sort(arr1.begin(),arr1.end());
      sort(arr2.begin(),arr2.end());
      int i=0,j=0,k=0;
      while(i<n && j<m)
      {
          if(arr1[i]<arr2[j])
          {
              res[k++]=arr1[i];
              i++;
          }
          else
          {
              res[k++]=arr2[j];
              j++;
          }
      }
      while(i<n)
      {
          res[k++]=arr1[i];
              i++;
      }
       while(j<m)
      {
            res[k++]=arr2[j];
              j++;
      }
    }
};
