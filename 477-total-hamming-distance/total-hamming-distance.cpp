class Solution {
public:
    int totalHammingDistance(vector<int>& arr) 
    {
       int n=arr.size(),count=0,i=32;
       while(i--)
       { int ones=0,zeroes=0;
         for(int j=0;j<n;j++)
         {
          if(arr[j]&1)
          ones++;
          else
          zeroes++;
          arr[j]>>=1;
          }
          count=count+(ones*zeroes);
       }
       return count;
    }
};