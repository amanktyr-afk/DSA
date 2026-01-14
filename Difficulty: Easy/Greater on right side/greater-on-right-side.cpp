// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    // suffix max approach
    vector<int> nextGreatest(vector<int> arr)
    {
       int n=arr.size();
       int suffix=-1;
       for(int i=n-1;i>=0;i--)
       {   
           int ele=arr[i];
           arr[i]=suffix;
           suffix=max(suffix,ele);
       }
       return arr;
    }
};