// User function template for C++
class Solution {
  public:
    int findMissing(vector<int> &arr)
    {
        int n=arr.size();
        int a=0,b=0,x=0,diff=0,d=0;
        int i=0;
        b=arr[i+1]-arr[i];
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==b)
                 a++;
            else
            {
                d=arr[i+1]-arr[i];
                x++;
            }
        }
        if(x>a)
        diff=d;
        else
        diff=b;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]!=diff)
            return arr[i+1]-diff;
        }
        return arr[n-1]+diff;
    }
};